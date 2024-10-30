#include<bits/stdc++.h>
using namespace std;
//Longest repeating character replacement
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size(), ans=0;
        for(char c='A'; c<='Z'; c++){
            int i=0, j=0, count=0;
            while(j<n){
                if(s[j]!=c){
                    count++;
                }
                while(count>k){
                    ans=max(ans,j-i);
                    if(s[i]!=c) count--;
                    i++;
                }
                j++;
            }
            ans=max(ans,j-i);
        }

        return ans;
    }
};
int main(){
    Solution obj;
    cout<<obj.characterReplacement("ABAB",2);
}
