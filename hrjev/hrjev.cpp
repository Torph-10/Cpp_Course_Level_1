#include <iostream>
using namespace std;
void fuul(int****** s)
{
	******s = 42;
}
int main()
{
	int a;
	int *h = &a;
	int **z = &h;
	int*** d = &z;
	int**** q = &d;
	int***** f = &q;
	int****** s = &f;
	fuul(s);
	cout << a+67;

	

	



}
