/*Midterm Exam - Coding Two ints check for sum of ints between and divisibiility*/
#include <iostream>

using namespace std;

bool isDiv711NotBoth(int);

int main()
{
	int num1, num2, sum;
	bool input = false;


	cout<<"Enter two numbers (first smaller than second):";

	sum = 0;
		while(input == false)
		{
		cin>>num1;
		cin>>num2;
		if(num1<num2)
			input = true;
		}
	for(int x=num1; x<=num2; x++)
	{
		sum+=x;

		if(isDiv711NotBoth(x))
		cout<<x<<" is divisible by either "<<num1<<" or "<<num2<<" but not both "<<endl;
	}
		cout<<"The sum of the numbers from "<<num1<<" to "<<num2<<" inclusive is "<<sum<<endl;

return 0;
}
bool isDiv711NotBoth(int x)
{
	if(x % 7 == 0 && x % 11 == 0)
		return false;
	if(x % 7 != 0 && x % 11 == 0)
		return true;
	if(x % 7 == 0 && x % 11 != 0)
		return true;
return 0;
}



