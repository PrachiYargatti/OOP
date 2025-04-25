#include<iostream>
using namespace std;

class Demo{
	private:
		int* p;
	public:
//		void getInfo(){  //getter or accessor
//			cout<<*p<<endl;
//		}
//		
//		void setInfo(int v){ //setter or mutator
//			*this->p = v;
//		}
		Demo& getInfo(){
			cout<<"value is: "<<*p<<endl;
			return *this;
		}
		Demo& setInfo(int x){
			*p = x;
			return *this;
		}
		
		Demo(int x){  //parameterised constructor
			p = new int(x);
		}
		
		Demo(const Demo& obj){  //copy constructor
			p = new int(*(obj.p)); //deep copy
		}
		
		~Demo(){  //deconstructor
			delete p;
			cout<<"Decontructer is called"<<endl; 
		}
}; 

int main(){
	Demo d1(111);
	d1.getInfo();
	Demo d2(d1);
	d2.getInfo();
	d2.setInfo(222);
	d2.getInfo();
	d1.getInfo().setInfo(333).getInfo();
	d1.~Demo();
	d1.getInfo(); //it does not gives garbage value
	return 0;
}
