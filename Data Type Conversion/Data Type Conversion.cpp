#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number;
	string name;
	string country;

	cout << "Enter ur number  : \n";
	cin >> number;
	cout << "Enter ur name : \n";
	getline(cin, name);
	cout << "Enter ur country : \n";
	cin >> country;

	cout << number << " - " << name << " - " << country << " - " << endl;








	return 0;
}
