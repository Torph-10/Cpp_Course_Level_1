#include <iostream>
using namespace std;
int main()
{
	int arr[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int searchnum = 20;
	for (int i = 0; i < 10; i++)
	{
		cout << "we are at iteration num " << i + 1 << endl;
		if (searchnum == arr[i])
		{
			cout << arr[i]<<"   we found it at "<<i+1<< endl;
			break;
		}
	}


	return 0;
}
