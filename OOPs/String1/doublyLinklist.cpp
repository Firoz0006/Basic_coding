#include <bits/stdc++.h>

using namespace std;

class DoublyLinklist
{
public:
    int data;
    DoublyLinklist *next, *prev;
    DoublyLinklist()
    {
        next = nullptr, prev = nullptr;
    }
    ~DoublyLinklist() {}
};

int main(int argc, char const *argv[])
{
    DoublyLinklist *root = new DoublyLinklist();
    root->data = 10;

    // DoublyLisklist *second = new DoublyLisklist();
    // root->next = second;
    // second->prev = root;

    // DoublyLisklist *third = new DoublyLisklist();
    // second->next = third;
    // third->prev = second;

    DoublyLinklist *tail = root;
    for (int i = 0; i < 10; i++)
    {
        DoublyLinklist *tmp = new DoublyLinklist();
        tmp->data = (1 + i) * 10;
        tail->next = tmp;
        tmp->prev = tail;
        tail = tmp;
    }

    DoublyLinklist *cur = root;
    while (cur)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;

    cur = tail;
    while (cur)
    {
        cout << cur->data << " ";
        cur = cur->prev;
    }

    cout << endl;

    return 0;
}
