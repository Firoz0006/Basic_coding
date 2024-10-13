#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%400==0){
    //cin>>n;
    cout<<"leap year";
}
    elseif(n%4==0 && n%100!==0){
    cout<<"L.Y";
}
    else{
        cout<<"not leap year";
    }
    return 0;

    
} // namespace name
