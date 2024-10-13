#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>v;
   vector<int>v1(5,1);
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);

    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;
    v[1]=7;
     cout<<"size of v1:"<<v1.size()<<endl;
    cout<<"capacity of v1:"<<v1.capacity()<<endl;
    
    vector<int>vnew;
     vnew.push_back(40);
      vnew.push_back(41);
       vnew.push_back(42);
        vnew.push_back(44);
         vnew.push_back(45);
         vnew.pop_back();
         //vnew.pop_back();
        // vnew.pop_back();
         cout<<"size of vnew:"<<vnew.size()<<endl;
         cout<<"capacity of vnew:"<<vnew.capacity()<<endl;










}
//vector<int>v(4)