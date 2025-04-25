//function overloading
#include<iostream>
using namespace std;

class Shapes{
	public:
		float a;
		void area(int r){
			a = r*r*3.142;
			cout<<"Area of circle = "<<a;
		}
		void area(int l ,int b){
			a = l*b;
			cout<<"\nArea of rectangle = "<<a;
		}
		void area(int h, float b){
			a = 0.5*h*b;
			cout<<"\nArea of triangle = "<<a;
		}
		
};

int main(){
	Shapes s;
	s.area(5);
	s.area(4,5);
	s.area(2,6.33f);
	return 0;
}
