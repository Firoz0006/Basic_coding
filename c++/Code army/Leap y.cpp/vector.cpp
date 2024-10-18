#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>v1(5,2);
    cout<<"size of v1:"<<v1.size()<<endl;
    cout<<"capacity of v1:"<<v1.capacity()<<endl;
}