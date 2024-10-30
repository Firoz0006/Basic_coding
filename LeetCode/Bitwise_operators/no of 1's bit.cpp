#include<bits/stdc++.h>
using namespace std;
//no of 1's bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0)
        {
            //checking last bit
            if(n&1)
            {
                count++;
            }
            n=n>>1;
        }
            return count;
    }
        
};
int main()
{
    Solution s;
    int n;
    cout<<"enter the decimal no : ";
    cin>>n;
    cout<<"no of 1's in "<<n<<" is "<<s.hammingWeight(n);
    return 0;
}