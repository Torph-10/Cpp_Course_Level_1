#include <iostream>
using namespace std;

struct strinfo
{
	string fname;
	string lname;
	int age;
	string phone;
};

void read(strinfo& P1)
{
	cout << "Please Enter Your F Name ?" <<endl;
	cin >> P1.fname;
	cout << "Please Enter Your L Name ?" <<endl;
	cin >> P1.lname;
	cout << "Please Enter Your Age ?" <<endl;
	cin >> P1.age;
	cout << "Please Enter Your Phone ?" << endl;
	cin >> P1.phone;
}

void printf(strinfo per1)
{
	cout << "******************************\n";
	cout << "FName : " << per1.fname << endl;
	cout << "LName : " << per1.lname << endl;
	cout << "Age : " << per1.age << endl;
	cout << "Phone : " << per1.phone << endl;
	cout << "******************************\n";
}

void readpersons(strinfo Pesron[100], int &persons)
{
	for (int i = 0; i <= persons - 1; i++)
	{
		cout << "Please Enter Info of Person " << i + 1 << endl;
		cout << "\n**********************\n";
		read(Pesron[i]);
		cout << "\n**********************\n";

	}
}

void printpersns(strinfo Person[100],int persons)
{
	for (int i = 0; i <= persons - 1; i++)
	{
		cout << "Info Of Person" << i + 1 << endl;
		cout << "\n**********************\n";
		printf(Person[i]);
		cout << "\n**********************\n";
	}

}
int main()
{
	strinfo Person[100];
	int persons;
	cout << "Please Enter How Many Peaple Info Entred?\n";
	cin >> persons;

	readpersons(Person, persons);
	printpersns(Person, persons);

	return 0;
}