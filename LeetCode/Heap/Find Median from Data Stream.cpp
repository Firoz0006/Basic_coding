#include<bits/stdc++.h>
using namespace std;
//find median from data stream
class MedianFinder {
public:
    multiset<int> ms;
    multiset<int>::iterator mid; 

    MedianFinder() {
        mid = ms.end();
    }

    void addNum(int num) {
        int n = ms.size();
        ms.insert(num);

        if (n == 0) {
            mid = ms.begin(); 
        }
        else if (n&1) {
            if (num < *mid) { 
                mid--;
            }
        } 
        else {
            if (num>=*mid) { 
                mid++;
            }
        }
    }

    double findMedian() {
        int n = ms.size();

        if (n % 2 != 0) {
            return *mid;
        }

        auto next_mid = next(mid);
        return (*mid + *next_mid) / 2.0;
    }
};
int main() {
    MedianFinder* obj = new MedianFinder();
    obj->addNum(1);
    obj->addNum(2);
    cout << obj->findMedian() << endl;
    obj->addNum(3);
    cout << obj->findMedian() << endl;
    return 0;
}