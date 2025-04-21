#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40};

    myList.push_back(50);  // Add at the end
    myList.push_front(5);   // Add at the front

    cout << "List elements: ";
    for (int x : myList)
        cout << x << " ";
    cout << endl;

    myList.pop_back();  // Remove last element
    myList.pop_front(); // Remove first element

    cout << "After pop operations: ";
    for (int x : myList)
        cout << x << " ";
    cout << endl;

    myList.reverse();  // Reverse the list
    cout << "Reversed List: ";
    for (int x : myList)
        cout << x << " ";
    cout << endl;

    myList.sort();  // Sort the list
    cout << "Sorted List: ";
    for (int x : myList)
        cout << x << " ";
    cout << endl;

    return 0;
}
