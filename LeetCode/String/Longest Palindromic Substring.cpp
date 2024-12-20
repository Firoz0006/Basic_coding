#include<bits/stdc++.h>
using namespace std;
//longest palindromic substring
class Solution {
public:
        bool solve(string &s,int i,int j){
            if(i>=j){
                return true;
            }
            if(s[i]==s[j])
                return solve(s,i+1,j-1);
            return false;
        }
    string longestPalindrome(string s) {
        int n=s.length();
        int maxlen=INT_MIN,sp=0;//sp=starting point

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){

                if(solve(s,i,j)==true){
                  if((j-i+1)>maxlen){
                    maxlen=j-i+1;
                    sp=i;
                  }
                }
                
            }
        }
        return s.substr(sp,maxlen);

        
    }
};
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    Solution obj;
    cout<<obj.longestPalindrome(s);
}