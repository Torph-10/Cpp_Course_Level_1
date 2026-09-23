#include <iostream>
using namespace std;


int main()
{
    int Num, sum = 0;
    
   

    for (int i = 1; i <= 5; i++)
    {
        cout << "Please Enter Number " << i << endl;;
        cin >> Num;

        if (Num > 50)
        {
            continue;
        }
        
        sum += Num;
    }
    cout << "SUM = " << sum << endl;


    return 0;
}
