#include <iostream>
using namespace std;


int main()
{
    int a[] = {2,4,5,8,1};
   
    for(int i = 0;i<5;i++)
    {
        cout << "address = " << &a[i] << endl;
        cout << "address = " << a + 1 << endl;
        cout << "value  = " << a[i] << endl;
        cout << "value = " << *a + 1 << endl;
    }




    return 0;
}
