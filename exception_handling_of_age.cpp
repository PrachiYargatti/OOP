#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"enter the age: ";
	cin>>age;
	
	try
	{
		if(age<0)
			throw "Negative age";
		if(age==0)
			throw "Zero age";
		cout<<"age "<<age<<" is positive";
	}
	catch(const char* str)
	{
		cout<<"Exception: "<<str<<endl;
	}
	return 0;
}
