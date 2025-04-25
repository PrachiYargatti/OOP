#include<iostream>
using namespace std;

class arith_operation{
	public:
		int a,b;
		
	void get_values()
	{
		std::cout<<"enter numbers for operation: ";
		std::cin>>a>>b;
	}
	void add()
	{
		std::cout<<"addition: ";
		std::cout<<a+b<<endl;
	}
	void substract()
	{
		std::cout<<"substraction: ";
		std::cout<<a-b<<endl;
	}
	void multiply()
	{
		std::cout<<"multiplication: ";
		std::cout<<a*b<<endl;
	}
	void div()
	{
		std::cout<<"division: ";
		std::cout<<a/b<<endl;
	}
};

int main()
{
	arith_operation r;
	r.get_values();
	r.add();
	r.substract();
	r.multiply();
	r.div();
}
