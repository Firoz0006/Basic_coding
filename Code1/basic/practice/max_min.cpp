#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec={2,4,1,9,0,8,15,25};
    make_heap(vec.begin(),vec.end());

    cout<<"the max element of heap:"<<endl;    
    cout<<vec.front()<<endl;
    cout<<"the min element of heap:"<<endl; 
    cout<<vec.back()<<endl;   

    return 0;
}