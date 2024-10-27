#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="google";
    int i=0;
    int j=str.size()-1;

    while (i<j)
    {
        char ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i++;
        j--;
    }
    cout<<str<<endl;
    

}