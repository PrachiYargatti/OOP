#include<iostream>
using namespace std;

class Base{
	public: int a=10;
	protected: int b=20;
	private: int c=30;
	
	public: 
		void show(){
			cout<<b<<" "<<c;
		}
	
};
class Derived:protected Base{
	public:
		void get(){
			show();
		}
};
int main(){
	Derived d;
	d.get();
	return 0;
}
