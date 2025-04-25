//function overriding
#include<iostream>
using namespace std;

class Parent{
	public:
		void f1(){
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
	Parent p;
	p.f1();//parent class
	Child c;
	c.f1();//child class
	return 0;
}
