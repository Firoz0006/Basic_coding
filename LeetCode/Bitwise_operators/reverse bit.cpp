#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res = 0;
        for(int i=0;i<32;i++){
            int LSB=n&1;
            int reverseLSB=LSB<<(31-i);
            res = res|reverseLSB;
            n=n>>1;

        }
        return res;
        
    }
};
int main() {
    Solution s;
    int n;
    cout << "enter the decimal no : ";
    cin >> n;
    cout << "reverse of" << n << " is " << s.reverseBits(n);
    return 0;
}