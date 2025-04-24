#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    cout << "Deque elements: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    dq.pop_back();
    dq.pop_front();

    cout << "After pop operations: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    return 0;
}
