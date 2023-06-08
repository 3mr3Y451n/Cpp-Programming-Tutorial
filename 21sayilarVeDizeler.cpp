#include <iostream>
#include <string>
using namespace std;

int main(){

/*

C++ +operatörü hem toplama hem de birleştirme için kullanır.
Sayılar eklenir. Dizeler birleştirilir
İki sayı eklersek, sonuç bir sayı olur.

*/
    int x = 10;
    int y = 20;
    int z = x + y;      // z değeri 30 olacaktır (integer)
    cout << z ;

//  Bir dizgeye sayı eklemeye çalışırsak c++ bir hata oluşur

/*
bu kod hata verir:
string x = "10";
int y = 20;
string z = x + y;
*/

    return 0;
}
