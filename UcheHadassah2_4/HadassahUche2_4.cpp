/*Write the following function to display an integer in reverse order:
void reverse(int number)
For example, reverse(3456) displays 6543. Test your function.*/
#include<iostream>
using namespace std;
void reverse(int number);
int main()
{
	int num;
	cout << "Enter the integer you want to reverse:";
	cin >> num;
	reverse(num);
	return 0;
}
void reverse(int number)
{
	while (number % 10 != 0)
	{
		cout << number % 10;
		number = number / 10;
	}
}
