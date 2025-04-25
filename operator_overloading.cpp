#include <iostream>
using namespace std;

class Complex{
    private:
        double real, imag;
    public:
        Complex(double r=0, double i=0): real(r),imag(i){};

        Complex operator +(const Complex& obj){
            return Complex(real+obj.real, imag+obj.imag);
        }
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }

};
int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; // Uses overloaded + operator
    c3.display();  // Output: 4 + 6i
    return 0;
}
