#include <iostream>
#include <string>

using namespace std;

void myinfo()
{
	string fullname;
	int age;
	string city;
	string country;

	cout << "Enter Your FullName : \n";
	getline(cin, fullname);
	cout << "Enter Your Age : \n";
	cin >> age;
	cout << "Enter Your City: \n";
	cin >> city;
	cout << "Enter Your Country : \n";
	cin >> country;
	cout << endl << endl;

	cout << "*************************************** \n";
	cout << "Name : " << fullname << "\n";
	cout << "Age : " << age << " Years\n";
	cout << "City : " << city << "\n";
	cout << "Country : " << country << "\n";
	cout << "*************************************** \n\n" << endl;
}

void stars()
{
	cout << "********************\n";
	cout << "********************\n";
	cout << "********************\n";
	cout << "********************\n\n\n";
}

void programmingwishes()
{
	cout << "I Love Programming! \n\n";
	cout << "I promise to be the best developer ever \n\n";
	cout << "I know it will take some time to practice, but I \n";
	cout << "will achieve my goal.\n\n";
	cout << "Best Regards,\n";
	cout << "Mohammed Abu-Hahdoud.\n\n";

}

void myH()
{
	cout << "*           * \n\n";
	cout << "*           * \n\n";
	cout << "*  *  *  *  *  \n\n";
	cout << "*           * \n\n";
	cout << "*           * \n" << endl;

}

int main()
{
	myinfo();
	stars();
	programmingwishes();
	myH();

	return 0;
}