//virtual function
#include<iostream>
using namespace std;

class Parent{
	public:
		virtual void f1(){
			cout<<"\nIn parent class";
		}
};
class Child: public Parent{
	public:
		void f1(){
			cout<<"\nIn child class";
		}
};

int main(){
	Parent *p;
	Child c;
	p=&c;
	p->f1();
	return 0;
}
