#include <iostream>

using namespace std;

int main()
{

// Operatörler, değişkenler ve değerler üzerinde işlem yapmak için kullanılır.
// Aşağıdaki örnekte, iki değeri toplamak için + operatörü kullanıyoruz:

int a = 100 + 50;
cout << a << endl;

/*
+ operatörü, yukarıdaki örnekte olduğu gibi genellikle iki değeri bir araya getirmek için kullanılsa da,
bir değişken ile bir değeri veya bir değişken ile başka bir değişkeni birbirine eklemek için de kullanılabilir.
*/

int sum1 = 100 + 50;        // 150 (100 + 50)
int sum2 = sum1 + 250;      // 400 (150 + 250)
int sum3 = sum2 + sum2;     // 800 (400 + 400)

cout << "Toplam1: " << sum1 << endl << "toplam2: " << sum2 << endl <<"toplam3: " << sum3 << endl;

/*
C++ operatörleri aşağıdaki gruplara ayırır:

- Aritmetik operatörler
- Atama işleçleri
- Karşılaştırma işleçleri
- Mantıksal operatörler
- bitsel operatörler
*/

    int x = 5;
    int y = 3;
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
    x = 5;
    ++x;
    cout << x << endl;
    x = 5;
    --x;
    cout << x << endl;


    x = 5;
    cout << "++x: " << ++x << endl;
    cout << "x: " << x << endl;
    x = 5;
    cout << "x++: " << x++ << endl;
    cout << "x: " << x << endl;
    x = 5;
    cout << "--x: " << --x << endl;
    cout << "x: " << x << endl;
    x = 5;
    cout << "x--: " << x-- << endl;
    cout << "x: " << x << endl;





    return 0;
}
