#include<iostream>
#include<fstream>
using namespace std;

class Student{
	public:
		int roll;
		char name[20];
		float per;
		
		void write(){
			fstream f;
			f.open("student.txt",ios::app);
			cout<<"Enter R,N & P: ";
			cin>>roll>>name>>per;
			f<<roll<<"\t"<<name<<"\t"<<per<<"\n";
			f.close();
		}
		
		void read(){
			fstream f;
			f.open("student.txt",ios::in);
			cout<<"Roll\tName\tPer\n";
			do
			{
				f>>roll>>name>>per;
				cout<<roll<<"\t"<<name<<"\t"<<per<<"\n";
			}
			while(f);
			f.close();
		}
};

int main(){
	Student s;
	s.write();
	s.write();
	s.read();
	return 0;
}
