#include <bits/stdc++.h>
using namespace std;
class Linklist
{
public:
    int data;
    Linklist *next;

} *root = new Linklist();
int main()
{
    root->data = 10;
    Linklist *tail = root;
    for (int i = 1; i < 6; i++)
    {
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
    Linklist *prev = NULL;
    cur = root;

    while (cur)
    {
        Linklist *next = root->next;
        cur->next = prev;
        prev = cur;
        if (next == NULL)
        {
            root = cur;
        }
        cur = next;
    }

    cur = root;
    while (cur)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;

    return 0;
}
