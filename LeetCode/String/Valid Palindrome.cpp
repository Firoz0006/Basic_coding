#include<bits/stdc++.h>
using namespace std;
//valid palindrome example racecar,madam
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> sen;
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                sen.push_back(tolower(s[i]));
            }
        }
        int n=sen.size();
        
        int low=0;
        int high=n-1;
        while(low < high){
            if(sen[low] != sen[high])
            return false;
            low ++;
            high --;
        }
        return true;
    }
};
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    Solution obj;
    cout<<obj.isPalindrome(s);
    return 0;
}