#include<iostream>
using namespace std;

class A{
	public:
		int a,b;
		void getValue(){
			cout<<"enter two no. : ";
			cin>>a>>b;
		}
};
class B: virtual public A{
	public:
		int add(){
			return a+b;
		}
		void addition(){
			cout<<"\nAddition: "<<a+b;
		}
};
class C : virtual public A{
	public:
		int sub(){
			return a-b;
		}
		void substract(){
			cout<<"\nsubstraction: "<<a-b;
		}
};
class D: public B, public C{
	public:
		void mult(){
			cout<<"\nmultiplication of addition and substraction: ";
			cout<<sub()*add();
		}
};
int main(){
	D d1;
	d1.getValue();
	d1.addition();
	d1.substract();
	d1.mult();
	return 0;
}
