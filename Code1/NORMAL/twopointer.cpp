#include<bits/stdc++.h>
using namespace std;
 main(){
    int a[] = {10, 11, 12, 14};

    reverse(a, a + 4);
   
    string str="google";

    reverse(str.begin(), str.end());
    
    vector<int> vec = {1, 2, 3, 4};

    reverse(vec.begin(), vec.end());

    for(auto n : vec) {
        cout << n << " ";
    }

    cout << endl;

    // int i=0;
    // int j=str.size()-1;
    // while(i<j){
    //     char ch=str[i];
    //     str[i]=str[j];
    //     str[j]=ch;
    //     i++;
    //     j--;
    //     }
    cout<<str<<endl;

}