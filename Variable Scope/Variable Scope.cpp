#include <iostream>
using namespace std;

int x = 15, y = 56, sum; // Called Global Variable and Still in Memory Forever

void myfonction()
{
	int x = 70; // Called Local Variable and End When Programme Excuted
	cout << "My Function Variable = " << x << endl;
}

int main()
{
	int x = 100; // Called Local Variable and End When Programme Excuted
	::sum = ::x * x  + ::y ;

	cout << "The Sum Of Variable Scop = " << ::sum << endl;
	myfonction();
	








	return 0;
}
