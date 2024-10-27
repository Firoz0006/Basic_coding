#include<bits/stdc++.h>
#include "heap.cpp"

using namespace std;

int main() {
    MaxHeap heap;

    heap.insert(20);
    heap.insert(40);
    heap.insert(10);
    heap.insert(50);

    heap.print();

    heap.insert(60);
    heap.insert(5);
    heap.print();

    heap.pop();
    heap.print();

    return 0;
}
