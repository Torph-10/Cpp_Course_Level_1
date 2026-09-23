#include <iostream>
using namespace std; 

enum Gender { Male = 10, Female = 5};
enum Status { Single, Married };
enum Color {Red, Black,Blue,Yellow, Green=0};

int main()
{
	Gender MyGender;
	Status MyStatus;
	Color MyColor;
	MyGender = Gender::Male;
	MyStatus = Status::Single;
	MyColor = Color::Green;


	string Name = "Abdeslam Elgarh";
	short int Age = 26;
	string City = "Essaouira";
	string Country = "Morocco";
	float Monthly_Salary = 300;

	//unsigned char Gender = 'M';
	//bool Married = false;

	cout << "\a";
	cout << "*********************************\n";
	cout << "Name : " << Name << endl;
	cout << "Age : " << Age << " Years.\n";
	cout << "City : " << City << endl;
	cout << "Country : " << Country << endl;
	cout << "Monthly_Salary : " << Monthly_Salary << endl;
	cout << "Yearly_Sslary : " << Monthly_Salary * 12 << endl;
	cout << "Gendeer :" << MyGender << endl;
	cout << "Status :" << MyStatus << endl;
	cout << "Color :" << MyColor << endl;
	cout << "*********************************\n";	