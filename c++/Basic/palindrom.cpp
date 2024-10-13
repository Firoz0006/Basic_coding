#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int n= s.size();
    int i=0,j=n-1;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
            //cout<<"palindrom:"<<endl;
        else{
            cout<<"not palindrom no :";
            return 0;
        }

    }
    cout<<"palindrom:";
    return 0;
}