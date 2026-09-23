#include <iostream>
using namespace std;

int main()
{
    int A = 1, B = 0;
    cout << (A && B) << endl;
    cout << (A || B) << endl;
    cout << !A << endl;
    cout << !B << endl;
    cout << !(A && B) << endl;
    cout << !(A || B) << endl;

    int z = (12 >= 12), e = !(12 >= 12), r = (1 && 1), t = ((7 == 7) && (7 > 5)), y = (12 > 7), u = !(12 < 7), i = (true && 0), o = ((7 == 7) && (7 < 5)), p = (8 < 6), q = !(8 < 6);
    int s = (0 || 1), d = ((7 == 7) || (7 < 5)), f = (8 == 8), g = !(8 == 8), h = (0 || 0), j = ((7 < 7) || (7 > 5)), k = (12 <= 12), l = !(12 <= 12), m = !(0), n = (!(7 == 7) && (7 > 5)), w = (7 == 5), x = !(7 == 5), c = !(1 || 0), v = ((7 == 7) && !(7 < 5));
    int az = ((5 > 6 && 7 == 7) || (1 || 0)), ze = (!(5 > 6 && 7 == 7) || (1 || 0)), er = (!(5 > 6 && 7 == 7) || !(1 || 0)), rt = (!(5 > 6 || 7 == 7) && !(1 || 0));
    int sum = (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true);
    cout << "z= " << z << endl;//1
    cout << "e= " << e << endl;//0
    cout << "r= " << r << endl;//1
    cout << t << endl;//1

    cout << "y= " << y << endl;//1
    cout << "u= " << u << endl;//1
    cout << "i= " << i << endl;//0
    cout << "o= " << o << endl;//0

    cout << "p= " << p << endl;//0
    cout << "q= " << q << endl;//1
    cout << "s= " << s << endl;//1
    cout << "d= " << d << endl;//1

    cout << "f= " << f << endl;//1
    cout << "g= " << g << endl;//0
    cout << "h= " << h << endl;//0
    cout << "j= " << j << endl;//1

    cout << "k= " << k << endl;//1
    cout << "l= " << l << endl;//0
    cout << "m= " << m << endl;//1
    cout << "n= " << n << endl;//0

    cout << "w= " << w << endl;//0
    cout << "x= " << x << endl;//1
    cout << "c= " << c << endl;//0
    cout << "v= " << v << endl;//1

    cout << "az= " << az << endl;//1
    cout << "ze= " << ze << endl;//1
    cout << "er= " << er << endl;//1
    cout << "rt= " << rt << endl;//0
    cout << "sum= " << sum << endl << endl << endl;//0
    int sul = ((5 > 6 && !(7 <= 8)) && (8 > 1 && 4 <= 3)) || 1;//1
    cout << sul;
    return 0;
}









