#include<iostream>
using namespace std;
template<typename T>

T add(T a, T b){
	return a+b;
}
int main(){
	int r = add(4, 5);
	cout<<"Sum is: "<<r<<endl;
	cout << "Sum is: "<<add(5.5, 2.3) << endl;
    return 0;
}
