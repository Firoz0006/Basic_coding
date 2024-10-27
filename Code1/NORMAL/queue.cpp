#include<bits/stdc++.h>

using namespace std;

int main() {
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);

    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }

    cout << endl;
    
    return 0;
}