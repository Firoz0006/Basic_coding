#include<bits/stdc++.h>
using namespace std;

int main(){

    int row,col;
    cout<<"Enter the number of rows:"<<endl;
    cin>>row;
    cout<<"Enter the number of columns:"<<endl;
    cin>>col;
    for(int i=row;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}