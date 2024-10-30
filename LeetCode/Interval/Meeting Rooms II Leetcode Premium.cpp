#include<bits/stdc++.h>
using namespace std;
//Meeting rooms ii Leetcode Premium

class solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        if(intervals.size()==0)
            return 0;
        vector<int> start,end;
        for(int i=0;i<intervals.size();i++)
        {
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int count=1;
        int j=0;
        int i=1;
        while(i<intervals.size())
        {
            if(start[i]>end[j])
            {
                count--;
                j++;                
            }
            count++;
            i++;            
        }
        return count;
    }
};
int main()
{
    vector<vector<int>> intervals={{0,30},{5,10},{15,20}};
    solution s;
    cout<<s.minMeetingRooms(intervals);
    return 0;
}