#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Number;
	string Name;
	string Country;
	
	cout << "Enter Your Number : " << endl;
	cin >> Number;
	cout << "Enter Your Name : " << endl;
	cin.ignore(1, '\n'); // WE use this cuz compiler consider when you click entre key if you enter the input
	getline(cin, Name);
	cout << "Enter Your Country : " << endl;
	cin >> Country;

	cout << endl << Number << endl;
	cout << Name << endl;
	cout << Country << endl;




	return 0;
}
