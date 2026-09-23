#include<iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int age;
	string city;
	string country;
	float monthly_salary;
	char gender;
	bool married;
	cout << "\a" ;
	cout << "Please enter your name ?\n";
	getline (cin , name);
	cout << "Please enter your age ?\n";
	cin >> age;
	cout << "Please enter your city ?\n";
	cin >> city;
	cout << "Please enter your country ?\n";
	cin >> country;
	cout << "Please enter your monthly salary ?\n";
	cin >> monthly_salary;
	cout << "Please enter your gende ? "<< endl;
	cin >> gender;
	cout << "Please enter your if ur married true or false  ?" << endl;
	cin >> married;
	
	cout << "**********************************" << endl;
	cout << "Name : " << name << endl;
	cout << "Age : " << age  << " Years old" << endl;
	cout << "City : " << city  << endl;
	cout << "Counrty : " << country << endl;
	cout << "Mounthly Salary : " << monthly_salary  << endl;
	cout << "Yearly Salary : " << monthly_salary * 12 << endl;
	cout << "Gender : " << gender << endl;
	cout << "Married  : " << married << endl;
	cout << "**********************************" << endl;

	int num1, num2, num3 ;

	cout << "Please enter F N ? " << endl;
	cin >> num1;
	cout << "Please enter S N ? \n";
	cin >> num2;
	cout << "Pleasee enter T N ? " << endl;
	cin >> num3;
	

	cout << "\a" << endl;
	cout << num1 << "+" << endl;
	cout << num2 << "+" << endl;
	cout << num3  << endl;

	cout << "___________________________________________" << endl;
	cout << num1 + num2 + num3 << "\n";

	int your_age;
	cout << "Please enter your age : \n";
	cin >> your_age;
	cout << "After 5 years you will be " << your_age + 5 << " years old\n ";


	return 0;
}