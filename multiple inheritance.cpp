#include<iostream>
using namespace std;

class A{
	public:
		int a;
		
		void get1(){
			cout<<"\nenter 1st values: ";
			cin>>a;
		}
};
class B{
	public:
		int b;
		
		void get2(){
			cout<<"\nenter 2nd values: ";
			cin>>b;
		}
};
class C: public A, public B{
	public:
		void sum(){
			cout<<"\nAddition: "<<a+b;
		}
};

int main(){
	C obj;
	obj.get1();
	obj.get2();
	obj.sum();
	return 0;
}
