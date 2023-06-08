#include <iostream>
#include <string>
using namespace std;

int main(){

/*

Dizeler tırnak içinde yazılması gerektiğinden,
C++ bu dizeyi yanlış anlayacak ve bir hata üretecektir:

string txt = "We are the so-called "Vikings" from the north.";

Bu sorunu önlemenin çözümü,
ters eğik çizgi kaçış karakterini kullanmaktır .
Ters eğik çizgi (\) kaçış karakteri,
özel karakterleri dize karakterlerine dönüştürür.

EKaçış Karakteri    Sonuç   Açıklama
\'	                '       tek tırnak
\"	                "       çift tırnak
\\                  \       ters eğik çizgi

*/


/*
        \"  bir dizeye çift tırnak ekler:
*/

    string txt = "Bizlere \"Karadenizli\" denir.";
    cout << txt << endl;

/*
        \'  bir dizeye tek tırnak ekler:
*/

    txt = "İstanbul\'u dinliyorum gözlerim kapalı.";
    cout << txt << endl;

/*
        \\  bir dizeye ters eğik çizgi ekler:
*/

    txt = "Karakter \\\'nin adı ters eğik çizgi yada backslash\'dır.";
    cout << txt << endl;

/*
        \n  bir dizeye yeni satır ekler:
*/

    txt = "Merhaba\nMillet!";
    cout << txt << endl;

/*
        \\  bir dizeye sekme (tab) ekler:
*/

    txt = "Merhaba\t\tDünya!";
    cout << txt << endl;

    return 0 ;
}
