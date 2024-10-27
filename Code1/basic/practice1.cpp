#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[][2]={{1,3},{4,2}, {10, 3}};
    int target[]={2,5};
    int x1,x2,y1,y2;
    int n=sizeof(a)/sizeof(a[0]);
    // cout<<n;

    double diff = INT_MAX;
    int res[2];
    for(int i=0;i<n;i++){
        x1 = a[i][0];
        x2 = target[0];
        y1 = a[i][1];
        y2 = target[1];
        double d=sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        if(d < diff) {
            diff = d;
            res[0] = a[i][0];
            res[1] = a[i][1];
        }
    }

    cout << res[0] << " " << res[1] << endl;

    return 0;
}