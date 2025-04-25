#include<iostream>
using namespace std;

class Complex{
	public:
		int real,img;
		
		Complex(){
			cout<<"\nenter real and img no. : ";
			cin>>real>>img;
		}
		Complex(int r,int i){
			real = r;
			img = i;
		}
		void display(){
			cout<<"\nsum: "<<real<<" + "<<img<<"i";
		}
		Complex operator + (Complex c4)
		{
			Complex c5(0,0);
			c5.real = real + c4.real;
			c5.img = img + c4.img;
			return c5;
		}
};
int main(){
	Complex c1;
	Complex c2;
	Complex c3 = c1 +c2;
	c3.display();
}
