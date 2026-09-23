#include<iostream>
using namespace std;

int main()
{
	int num1, num2;

	cout << " please enter f n : \n";
	cin >> num1;
	cout << "please enter s n : \n";
	cin >> num2;

	
	cout << num1 << " + " << num2 << " = " << num1 + num2 <<  endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	cout << num1 << " % " << num2 << " = " << num1 % num2 << endl; 
//num1 % num2 = how many times num2 existe in num1 and the rimender is the result ,EX 16 % 5 = 1, WHY 5+5+5= 15, 16-15 = 1 .
	return 0;
}

