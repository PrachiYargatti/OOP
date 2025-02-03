#include<iostream>
using namespace std;

class Circle{
	public:
		int r;
		float area;
		float perimeter;
		
		Circle(){	//default constructor
			cout<<"enter radius: "<<endl;
			cin>>r;
			area = 3.142*r*r;
			cout<<"\narea: "<<area<<endl;
			perimeter = 2*3.142*r;
			cout<<"\nperimeter: "<<perimeter<<endl;
		}
		Circle(int r1){	//parameterized constructor
			r=r1;
			area = 3.142*r*r;
			cout<<"\n\narea: "<<area<<endl;
			perimeter = 2*3.142*r;
			cout<<"\nperimeter: "<<perimeter<<endl;
		}
		Circle(Circle &obj){	//copy constructor
			r=obj.r;
			area = 3.142*r*r;
			cout<<"\n\narea: "<<area<<endl;
			perimeter = 2*3.142*r;
			cout<<"\nperimeter: "<<perimeter<<endl;
		}
		~Circle(){	//destructor
			cout<<"\n\ndestructor called";
		}
};

int main(){
	Circle c1;
	cout<<"\nradius1: "<<c1.r;
	Circle c2(6);
	cout<<"\nradius2: "<<c2.r;
	{
		Circle c3(c2);
		cout<<"\nradius3: "<<c3.r;
	}
	cout<<"\n\nmain executed";
}
