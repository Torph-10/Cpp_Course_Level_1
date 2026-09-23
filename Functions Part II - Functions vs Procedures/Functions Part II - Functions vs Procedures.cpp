#include <iostream>
using namespace std;

void mysumfonc() // THIS kind of called procedure, cuz it's not giving you back any value 
{
	int num1, num2;

	cout << "Enter Number 1 : \n";
	cin >> num1;
	cout << "Enter Number 2 : \n ";
	cin >> num2;

	cout << num1 + num2 << endl;
}

int mysumfonc2() // THIS kind of called fonction, cuz it's give you back value
{
	int num1, num2;
	cout << "Enter Number 1 : \n";
	cin >> num1;
	cout << "Enter Number 2 : \n ";
	cin >> num2;

	return num1 + num2 ;
}

int main()
{
	mysumfonc();
	cout << mysumfonc2();



	return 0;
}