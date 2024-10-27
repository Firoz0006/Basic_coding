#include<bits/stdc++.h>
using namespace std;
class Linklist{
    public:
    int data;
    Linklist *next;
} *root = new Linklist();

int main(){
    // root = new Linklist();
    root->data=10;

    Linklist *tail = root;

    for(int i = 1; i < 10; i++) {
        Linklist *tmp = new Linklist();
        tmp->data = (i + 1) * 10;
        tail->next = tmp;
        tail = tmp;
    }

    Linklist *cur = root;
    while (cur)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }

    cout << endl;
    return 0;
}