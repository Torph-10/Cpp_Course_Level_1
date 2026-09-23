#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
	string name;
	int age;
	string city;
	string country;
	int monthly_salary;
	int yearly_salary;
	char gender;
	bool status;
};

void ReadInfo(strInfo &info)
{
	cout << "Please Enter Your FullName : \n";
	getline(cin,info.name);
	cout << "Please Enter Your Age : \n";
	cin >> info.age;
	cout << "Please Enter Your City : \n";
	cin >> info.city;
	cout << "Please Enter Your Country : \n";
	cin >> info.country;
	cout << "Please Enter Your Monthly Salary : \n";
	cin >> info.monthly_salary;
	cout << "Please Enter Your Yearly Salary : \n";
	cin >> info.yearly_salary;
	cout << "Please Enter Your Gender : \n";
	cin >> info.gender;
	cout << "Please Enter Your Status : \n";
	cin >> info.status;
}
void test(strInfo x)
{
	cout << x.age;
	cout << x.country;
}
void PrintInfo(strInfo info)
{
	cout << "\a***********************************\n";
	cout << "FullName : " << info.name << endl;
	cout << "Age : " << info.age << endl;
	cout << "City : " << info.city << endl;
	cout << "Country : " << info.country << endl;
	cout << "Monthly Salary : " << info.monthly_salary << endl;
	cout << "Yearly Salary : " << info.yearly_salary << endl;
	cout << "Gender : " << info.gender << endl;
	cout << "Status : " << info.status << endl;
	cout << "***********************************\n";
}

int main()
{
	 strInfo person1;
	 ReadInfo(person1);
	//PrintInfo(person1);

	test(person1);

	return 0;
}
