#include<bits/stdc++.h>
using namespace std;

class code{

    public:
    //encode a list of string in a single string
    string encode(vector<string>& strs) {
        string res = "";
        for (string s : strs) {
            res += to_string(s.length()) + "#" + s;
        }
        return res;
    }

    //decodes a single string to a list of strings
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i));
            i = j + 1;
            res.push_back(s.substr(j + 1, len));
            i += len;
        }
        return res;
    }

};
int main()
{
    code obj;
    vector<string> strs = {"Hello","World"};
    string res = obj.encode(strs);
    vector<string> res2 = obj.decode(res);
    for(auto x:res2)
    {
        cout<<x<<" ";
    }
    return 0;
}