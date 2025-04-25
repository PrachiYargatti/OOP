#include<iostream>
using namespace std;

class Box{
	private:
		int l,w,b;
	public:
		void getInfo(){		//getter
			cout<<l<<w<<b<<endl;
		}
		void setInfo(int l, int w, int b){	//setter
			this->l = l;
			this->w = w;
			this->b = b;
		}
		
		Box(){	//default constructor
			this->l = 2;
			this->w = 3;
			this->b = 4;
		}
		
		Box(int x){	//parameterized constructor (1)
			l=w=b=x;
		}
		
		Box(int x, int y, int z){	//parameterized constructor (3)
			l=x;
			w=y;
			b=z;
		}
		
		Box(const Box& obj){	//copy constructor
			l = obj.l;
			w = obj.w;
			b = obj.b;
		}
		
		~Box(){	//deconstructor
			cout<<"Deconstructor is called"<<endl;
		}
		
		
};

int main(){
	Box b1;
	b1.getInfo();
	Box b2(5);
	b2.getInfo();
	Box b3(9,8,7);
	b3.getInfo();
	b3.setInfo(1,2,3);//.getInfo();
	b3.getInfo();
	Box b4(b2);
	b4.getInfo();
}
