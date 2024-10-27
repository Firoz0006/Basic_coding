#include <bits/stdc++.h>

using namespace std;


int Check(string s, int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    string s;
    int a, b;

    s = "TEST";
    a = 10;
    b = 20;

    Check(s, a, b);
    return 0;
}

int test() {
    Check("", 10, 20);
    return 0;
}