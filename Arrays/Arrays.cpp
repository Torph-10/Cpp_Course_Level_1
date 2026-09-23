#include <iostream>
using namespace std;

int main()
{
	int x[3];
	cout << "Grade 1 : \n";
	cin >> x[0];
	cout << "Grade 2 : \n";
	cin >> x[0];
	cout << "Grade 3 : \n";
	cin >> x[0];
	
	cout << "***************************\n";
	cout << " The Averege = " << (x[0] + x[1] + x[2]) / 3 << endl;
	



	return 0;
}