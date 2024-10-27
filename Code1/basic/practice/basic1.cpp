#include<bits/stdc++.h>
using namespace std;
void printDistinct(int a[],int n)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        if(!s.count(a[i]))
        {
        s.insert(a[i]);
        cout<< a[i]<<" ";
        }
    }
}

int main(){
int a[]={10, 5, 3, 4, 3, 5, 6};
int n=sizeof(a)/sizeof(a[0]);
printDistinct(a,n);
return 0;
}