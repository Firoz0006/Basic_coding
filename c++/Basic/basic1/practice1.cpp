#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> v{'a','b','c','d'};
   // cout<<v.size();
    v.push_back('e');
    v.push_back('1');
    v.pop_back();
   //v.erase(v.begin()+2);
   //v.emplace(v.begin()+1,'c');//a c b c d e
    //v.insert(v.begin()+2,'c');//a b c c d e
    //v.clear();
    //v.front();
    // v.back();
    //  v.at(2);
    //v.empty();
    for(char i:v){
        cout<<i<<endl;
    }

    return 0;
}