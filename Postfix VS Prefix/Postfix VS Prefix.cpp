#include <iostream>
using namespace std;
int main()
{
    int A =5, B;
    B = A++;// first, B will assigne value of A, and will add 1 to A,   B = 5, A = 6 ;

    cout << "A =" << A << endl << "b =" << B << endl << endl;
    B = ++A;// first, will add 1 to A(6) and save it in B,      A = 7, B = 7 ;
    cout << "A =" << A << endl << "b =" << B << endl << endl;
    
    return 0;
}