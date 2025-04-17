#include <iostream>
using namespace std;

template <typename T>
class Add{
    T a,b;
    public:
        Add(T x, T y){
            a = x;
            b = y;
        }
        T add(){
            return a+b;
        }
};
int main() {
    Add<int> a1(4,5);
    cout<<a1.add()<<endl;
    Add<float> a2(4.3,5.4);
    cout<<a2.add();

    return 0;
}
