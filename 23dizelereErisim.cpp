#include <iostream>
#include <string>
using namespace std;

int main(){

/*

Bir dizideki karakterlere,
Aşağıdaki örnek, myString içindeki ilk karakteri yazdırır.

*/

string myString = "Merhaba Millet";
cout << "myString dizesinin ilk harfi :" << myString[0] << endl;
// Çıktı M

/*
Dize dizinleri (index numaraları) 0 ile başlar:
[0] ilk karakterdir. [1] ikinci karakterdir, vb.
*/

myString = "Merhaba Millet";
cout << "myString dizesinin ikinci harfi :" << myString[1] << endl;
// Outputs e

//Dizenin bir karakterini değiştirme

/*
Bir dizedeki belirli bir karakterin değerini değiştirmek için
dizin numarası ve tek tırnak içinde yeni karakter kullanılır.
*/


myString[0] = 'J';
cout << myString;
// Çıktı Merhaba Millet yerine Jerhaba Millet olacaktır.

    return 0;
}
