#include <iostream>
using namespace std;




void myread(float sum[3])
{
	cout << " Please Enter Grade 1 ?\n";
	cin >> sum[0];
	cout << " Please Enter Grade 2 ?\n";
	cin >> sum[1];
	cout << " Please Enter Grade 3 ?\n";
	cin >> sum[2];
}

float myclaculate(float x[3])
{

	return (x[0] + x[1] + x[2]) / 3;

}




int main()
{
	float sum[3];
	cout << "\a\n";

	myread(sum);

	cout << "\a*******************************************\n";
	cout << myclaculate(sum);

	return 0;
}