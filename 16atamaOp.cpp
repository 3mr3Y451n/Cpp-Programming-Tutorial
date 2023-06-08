#include <iostream>

using namespace std;

int main()
{

//Atama Operatörleri
/*
Atama işleçleri, değişkenlere değer atamak için kullanılır.
Aşağıdaki örnekte,
x adlı bir değişkene
10 değerini atamak için
atama operatörünü ( = ) kullanıyoruz.
*/

    int x = 10;
    cout << x << endl;


//Toplama atama operatörü ( +=) bir değişkene bir değer ekler:

    x = 5;
    x += 3;
    cout << x << endl;
    x = 5;
    x -= 3;
    cout << x << endl;
    x = 5;
    x *= 3;
    cout << x << endl;
    x = 5;
    x /= 3;
    cout << x << endl;
    x = 5;
    x %= 3;
    cout << x << endl;
    x = 5;
    x &= 3;
    cout << x << endl;
    x = 5;
    x |= 3;
    cout << x << endl;
    x = 5;
    x ^= 3;
    cout << x << endl;
    x = 5;
    x >>= 3;
    cout << x << endl;
    x = 5;
    x <<= 3;
    cout << x << endl;

    return 0;
}
