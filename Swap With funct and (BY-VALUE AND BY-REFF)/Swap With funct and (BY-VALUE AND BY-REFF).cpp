#include <iostream>
using namespace std;

void myswap(int &Number1, int &Number2)
{
    int Swap;
    Swap = Number1;
    Number1 = Number2;
    Number2 = Swap;
    cout << "Function Number1 = " << Number1 << endl << "Function Number2 = " << Number2 << endl;
}
int main()
{
    int Number1, Number2;

    cout << "please enter Number1 : \n";
    cin >> Number1;
    cout << "please enter Number2 : \n";
    cin >> Number2;

    cout << "After swap \nNumber1 = " << Number1 << endl << "Number2 = " << Number2 << endl;

    myswap(Number1, Number2);
    cout << "Int Main Number1 = " << Number1 << endl << "Int Main Number2 = " << Number2 << endl;




    return 0;
}
