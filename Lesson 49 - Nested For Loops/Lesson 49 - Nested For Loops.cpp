#include <iostream>
using namespace std;

int main()
{
	for (char index = 65; index <= 90; index++)
{
	for (char i = 65; i <= 90; i++)
	{
		cout << index << " " << i <<    endl;
	}
}
	cout << endl << "******************************" << endl;
for (int i = 10;i>=1;i--)
	{
		for (int in = 1; in <= i; in++)
		{
			cout << "*" ;
		}
		cout << endl;
	}
	cout << endl << "******************************" << endl;
	for (int i = 10;i>=0;i--)
	{
		for (int index = 1; index<=i; index++)
		{
			cout << index << " ";
		}
		cout << endl;
	}
	cout << endl << "******************************" << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int index = 1; index <= i; index++)
		{
			cout << index << " ";
		}
		cout << endl;
	}
	cout << endl << "******************************" << endl;
	for (char i = 65; i <= 70; i++)
	{
		for (char index = 65; index <= i; index++)
		{
			cout << index << " ";
		}
		cout << endl;
	}
	cout << endl << "******************************" << endl;
	for (int i =1;i<=10;i++)
	{
		for (int j =i;j<=10;j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}