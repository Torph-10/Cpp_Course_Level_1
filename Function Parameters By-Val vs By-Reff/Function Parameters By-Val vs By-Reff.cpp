 //
#include <iostream>
using namespace std;



void myfunction(int &n1) 
// Parameters By Reffrence : this function is edite int main variable and didn't make a copy cuz you give the compiler it's reff its like its real place on memory
{
    n1 = 200;
    cout << "the value of void = " << n1 << endl;
}




int main() {

    int n1 = 100;

    myfunction(n1); // Parameters By Value : cuz the function create a copy of  int main variable and work on it 

    cout << "the VALUE of main = " << n1 << endl; // you going to print the value of variable and this is clear
    cout << "the REFFRENCE of main = " << &n1 << endl; // you going to print the reffrence of  variable 








    return 0;
}