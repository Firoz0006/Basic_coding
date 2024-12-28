#include<bits/stdc++.h>
using namespace std;
// No of 1 bits in a number(11->1011,output=3 )
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
    Solution obj;
    cout<<obj.hammingWeight(11);
    return 0;
}