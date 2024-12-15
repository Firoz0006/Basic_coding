#include<bits/stdc++.h>
using namespace std;

class cars{
    public:
    string car_name;
    int car_price;
    cars(string name, int price){//constructor
        car_name=name;
        car_price=price;
    }
    void display(){
        cout<<"Car name: "<<car_name<<endl;
        cout<<"Car price: "<<car_price<<endl;
    }
};

int main(){
    cars c1("BMW", 100);
    c1.display();
    return 0;
}
