#include <iostream>
#include <string>
using namespace std;

int main() {

/*

Yeni bir dize oluşturmak üzeere dizeleri birleştirmek için
aralarında + operatörünü kullanmak gereklidir.
Buna concatenation denir.

*/
    string ilkAd = "Emre "; //iki dize arasında bir boşluk istendiği için sona boşluk bırakıldı
    string ikinciAd = "Yasin " ; //iki dize arasında bir boşluk istendiği için sona boşluk bırakıldı
    string soyAd = "Albayrak"; // gerek olmadığı için sonda boşluk bırakılmadı
    string tamAd = ilkAd + ikinciAd + soyAd;
    cout << tamAd << endl;

    // tırnak içinde de boşluk bırakılabilirdi (" " ya da ' ')
    string firstName = "Ömer";
    string lastName = "Kaan";
    string fullName = firstName + " " + lastName; // çift tırnaklı
    cout << fullName << endl;
    fullName = firstName + ' ' + lastName; // tek tırnaklı
    cout << fullName << endl;

    //Ekleme Apend

/*C++'da bir string aslında
stringler üzerinde belirli işlemleri gerçekleştirebilen
fonksiyonları içeren bir nesnedir.
Örneğin, dizeleri append() işleviyle de birleştirebiliriz.
*/
    string isim = "Kerem ";
    string soyisim = "Sait";
    string isimSoyisim = isim.append(soyisim);
    cout << isimSoyisim << endl;

  return 0;
}
