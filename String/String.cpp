#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fullname, num1, num2;
	int sum;

	cout << "Enter Your FullName : \n";
	getline(cin, fullname);
	cout << "Enter String 1 : \n";
	cin >> num1;
	cout << "Enter String 2 : \n";
	cin >> num2;
	 
	cout << fullname.length() << endl;
	cout << fullname[0] << endl;
	cout << fullname[2] << endl;
	cout << fullname[8] << endl;
	cout << fullname[4] << endl;

	cout << num1 + num2 << endl;
	cout << stoi(num1) + stoi(num2) << endl; // OR sum = stoi(num1) + stoi(num2);                           

	return 0;
}
