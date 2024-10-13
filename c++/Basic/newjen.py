import json

class HolidayMaximizer:
    def __init__(self, offices, holidays):
        self.offices = offices
        self.holidays = holidays
        self.max_holidays = 0
        self.best_path = []

    def maximize_holidays(self):
        for office in self.offices:
            starting_office = office
            path = []
            self.dfs(1, starting_office, 0, 0, 0, path)

    def print_results(self):
        print("Office Transition Path:", " -> ".join(self.best_path))
        print("Total Holidays Enjoyed:", self.max_holidays)

    def dfs(self, month, current_office, relocations, quarterly_moves, holiday_count, path):
        if month > 12:
            if holiday_count > self.max_holidays:
                self.max_holidays = holiday_count
                self.best_path = path[:]
            return

        holiday_count += self.holidays[current_office][month - 1]
        path.append(current_office)

        self.dfs(month + 1, current_office, relocations, quarterly_moves, holiday_count, path)

        for neighbor in self.offices[current_office]:
            if relocations < 8:
                if quarterly_moves < 2:
                    self.dfs(month + 1, neighbor, relocations + 1, quarterly_moves + 1, holiday_count, path)
                else:
                    self.dfs(month + 1, neighbor, relocations + 1, 1, holiday_count, path)

        path.pop()

if __name__ == "__main__":
    json_data = '''
    {
        "offices": {
            "Noida": ["Delhi", "Gurugram", "Faridabad"],
            "Delhi": ["Noida", "Gurugram", "Sonipat", "Faridabad"],
            "Sonipat": ["Delhi", "Panipat", "Gurugram"],
            "Gurugram": ["Noida", "Delhi", "Sonipat", "Panipat", "Faridabad"],
            "Panipat": ["Sonipat", "Gurugram"],
            "Faridabad": ["Delhi", "Noida", "Gurugram"]
        },
        "holidays": {
            "Noida": [1, 3, 4, 2, 1, 5, 6, 5, 1, 7, 2, 1],
            "Delhi": [5, 1, 8, 2, 1, 7, 2, 6, 2, 8, 2, 6],
            "Sonipat": [2, 5, 8, 2, 1, 6, 9, 3, 2, 1, 5, 7],
            "Gurugram": [6, 4, 1, 6, 3, 4, 7, 3, 2, 5, 7, 8],
            "Panipat": [2, 4, 3, 1, 7, 2, 6, 8, 2, 1, 4, 6],
            "Faridabad": [2, 4, 6, 7, 2, 1, 3, 6, 3, 1, 6, 8]
        }
    }
    '''

    data = json.loads(json_data)
    offices = data["offices"]
    holidays = data["holidays"]

    maximizer = HolidayMaximizer(offices, holidays)
    maximizer.maximize_holidays()
    maximizer.print_results()

