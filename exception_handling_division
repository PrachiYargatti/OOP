#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter two numbers for division: ";
    cin >> b >> c;

    try {
        if (c == 0)
            throw "Divide by zero Error!";
        a = b / c;
        cout << "Answer = " << a << endl;
    }
    catch (const char* str) {
        cout << "Exception: " << str << endl;
    }

    return 0;
}
