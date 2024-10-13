// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
#include<bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
    
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    bool operator<(const Point& other) const {
        return (x < other.x) || (x == other.x && y < other.y);
    }
};

bool areCollinear(const Point& p1, const Point& p2, const Point& p3, const Point& p4) {
    // Check if the slopes between p1-p2, p1-p3, and p1-p4 are the same
    int dx1 = p2.x - p1.x;
    int dy1 = p2.y - p1.y;
    int dx2 = p3.x - p1.x;
    int dy2 = p3.y - p1.y;
    int dx3 = p4.x - p1.x;
    int dy3 = p4.y - p1.y;
    
    return (dy1 * dx2 == dy2 * dx1) && (dy1 * dx3 == dy3 * dx1);
}

void findCollinearPoints(const std::vector<Point>& points) {
    int n = points.size();
    set<std::vector<Point>> collinearSets;

    // Check all combinations of four points
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                for (int l = k + 1; l < n; ++l) {
                    if (areCollinear(points[i], points[j], points[k], points[l])) {
                        vector<Point> collinear = {points[i], points[j], points[k], points[l]};
                        sort(collinear.begin(), collinear.end());
                        collinearSets.insert(collinear);
                    }
                }
            }
        }
    }

    // Print collinear points
    for (const auto& set : collinearSets) {
        for (const auto& point : set) {
            std::cout << "(" << point.x << ", " << point.y << ") ";
        }
        cout << std::endl;
    }
}

int main() {
    vector<Point> points = {
        {0, 0}, {1, 1}, {2, 2}, {3, 3}, {3, 0}, {0, 3}, {2, 1}, {1, 2}
    };

    findCollinearPoints(points);

    return 0;
}
