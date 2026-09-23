#include<iostream>
using namespace std;

int main()
{   // home work 1
	string Name = "Abdeslam Elgarh";
	short int Age = 26;
	string City = "Essaouira";
	string Country = "Morocco";
	float Monthly_Salary =300;
    unsigned char Gender = 'M';
	bool Married = false;
	cout << "\a";
	cout << "*********************************\n";
	cout << "Name : " << Name << endl;
	cout <<"Age : "   << Age << " Years.\n";
	cout <<"City : "  << City << endl;
	cout <<"Country : "  << Country << endl;
	cout << "Monthly_Salary : " << Monthly_Salary << endl;
	cout <<"Yearly_Sslary : " << Monthly_Salary *12 << endl;
	cout <<"Gender : "<< Gender << "\n";
	cout << "Married : " << Married << "\n";
	cout << "*********************************\n";

	// Home work 2

	int num1 = 20, num2 = 30, num3 = 10;
	cout <<"Total = "<< num1 + num2 + num3 << endl ;
	
	// Home work 3
	int age = 25;
	cout << "After " << 5 <<" years you will be "<<age + 5<<" years old.\n";
	return 0;
}