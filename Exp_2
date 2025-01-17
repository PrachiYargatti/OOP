#include<iostream>
using namespace std;

class large{
	public:
		int arr[5];
		
	void get_values()
	{
		std::cout<<"enter five numbers to find largest among them: ";
		for(int i=0; i<5; i++)
		{
			std::cin>>arr[i];
		}
	}	
	
	void get_largest_value()
	{
		int largest = arr[0];
		for(int i=1; i<5; i++)
		{
			if(largest < arr[i])
			{
				largest = arr[i];
			}
		}
		std::cout<<"largest number is: "<<largest;
	}
};

int main()
{
	large max;
	max.get_values();
	max.get_largest_value();
}
