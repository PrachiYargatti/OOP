#include<iostream>
#include<fstream>
using namespace std;

class File{
	public:
		void write()
		{
			fstream f;
			f.open("file.txt",ios::app);
			f<<"good morning! have a nice day. ";
			f.close();
		}
		void count_of_words()
		{
			fstream f;
			char str[50];
			f.open("file.txt",ios::in);
			int c=0;
			while(f>>str)
			{
				c = c+1;
			}
			cout<<"count of words in content: "<<c;
		}
};
int main(){
	File f;
	f.write();
	f.count_of_words();
	return 0;
}
