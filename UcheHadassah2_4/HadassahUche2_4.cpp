/*Name:Uche Hadassah
This program displays a user-given integer in reverse order*/
#include<iostream>
using namespace std;
void reverse(int number);//Function Prototype
int main()
{
	int num;
	cout << "Enter the integer you want to reverse:";
	cin >> num;
	reverse(num);//Calling the function
	return 0;
}
void reverse(int number)
{
	while (number % 10 != 0)//While we have not reached the first number
	{
		cout << number % 10;//Outputs the last number
		number = number / 10;//Removes the last number
	}
}
