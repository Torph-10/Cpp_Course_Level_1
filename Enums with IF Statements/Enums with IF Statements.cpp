#include<iostream>
using namespace std;

//enum encolors{white = 1, Light_Blue = 2, green = 3, yellow = 4};
enum encountries { morocco = 1, algeria = 2, portugal = 3, cote_de_ivory = 4 };


int main()
{

	cout << "(1) Morocco\n";
	cout << "(2) Algeria \n";
	cout << "(3) Portugal \n";
	cout << "(4) Cote De Ivory \n";
	cout << "***************************" << endl;
	cout << "Please Enter Your Country Number ? \n";

	int number;
	cin >> number;

	encountries country;
	country = (encountries)number;

	if (country == encountries::morocco)
	{
		cout << "Morocco" << endl;
		system("color 4F");
	}
	else if (country == encountries::algeria)
	{
		cout << "Algeria" << endl;
		system("color AF");
	}
	else if (country == encountries::portugal)
	{
		cout << "Portugal" << endl;
		system("color CF");
	}
	else if (country == encountries::cote_de_ivory)
	{
		cout << "Cote De Ivory" << endl;
		system("color 2F");
	}
	else
	{
		cout << "Wrong Country\n";
		system("color BF");
	}

}