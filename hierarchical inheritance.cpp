#include<iostream>
using namespace std;

class A{
	public:
		int a,b;
		
		void get(){
			cout<<"\nenter two values: ";
			cin>>a>>b;
		}
};
class B: public A{
	public:	
		void sum(){
			cout<<"\naddition: "<<a+b;
		}
};
class C: public A{
	public:
		void sub(){
			cout<<"\nsubstraction: "<<a-b;
		}
};

int main(){
	B obj1;
	C obj2;
	obj1.get();
	obj1.sum();
	obj2.get();
	obj2.sub();
	return 0;
}
