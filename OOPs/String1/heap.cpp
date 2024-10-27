#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
private:
    std::vector<int> elements;

    void swap(int &a, int &b)
    {
        int t = a;
        a = b;
        b = t;
    }

    void bubbleUp(int index)
    {
        if (index == 0)
            return;

        int parentIndex = (index - 1) / 2;

        if (elements[parentIndex] >= elements[index])
            return;

        // int leftChildIndex = 2 * parentIndex + 1;
        // int rightChildIndex = 2 * parentIndex + 2;
        // int smallElementIndex = leftChildIndex;
        // if (elements[leftChildIndex] > elements[rightChildIndex])
        // {
        //     smallElementIndex = rightChildIndex;
        // }

        swap(elements[index], elements[parentIndex]);
        bubbleUp(parentIndex);
    }

    void bubbleDown(int index)
    {
        if (index >= elements.size())
            return;

        int leftChildIndex = 2 * index + 1;
        if (leftChildIndex >= elements.size())
        {
            return;
        }

        int rightChildIndex = 2 * index + 2;

        int greaterElementIndex = -1;

        if (elements[index] < elements[leftChildIndex])
        {
            greaterElementIndex = leftChildIndex;
        }

        if (rightChildIndex < elements.size() && elements[leftChildIndex] < elements[rightChildIndex])
        {
            greaterElementIndex = rightChildIndex;
        }

        if (greaterElementIndex == -1)
            return;

        swap(elements[index], elements[greaterElementIndex]);
        bubbleDown(greaterElementIndex);
    }

public:
    void insert(int ele)
    {
        if (elements.size() == 0)
        {
            elements.push_back(ele);
            return;
        }

        elements.push_back(ele);
        bubbleUp(elements.size() - 1);
    }

    int top()
    {
        if (elements.size() == 0)
        {
            throw 0;
        }

        return elements[0];
    }

    void pop()
    {
        elements[0] = elements[elements.size() - 1];
        elements.pop_back();
        bubbleDown(0);
    }

    void print()
    {
        cout << "Size : " << elements.size() << "\n";
        for (int a : elements)
        {
            std::cout << a << " ";
        }
        cout << "\n";
    }
};