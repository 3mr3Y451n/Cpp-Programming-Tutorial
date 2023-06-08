#include <iostream>

using namespace std;

int main(){
/*

Değerleri çıkarmak (yazdırmak) için cout kullanıldığını zaten öğrendik.
Şimdi kullanıcı girişi almak için cin kullanacağız .
cin, çıkarma işleciyle (>>) klavyeden veri okuyan önceden tanımlanmış bir değişkendir.
Aşağıdaki örnekte kullanıcı, x değişkeninde saklanan bir sayı girebilir. Sonra bu x değerini ekrana yazdıralım.

*/
int a;
cout << "Type a number: "; // Type a number and press enter
cin >> a; // Get user input from the keyboard
cout << "Your number is: " << a << endl; // Display the input value

/*
Faydalı Bilgi
cout "see-out" olarak telaffuz edilir. Çıktı için kullanılır ve ekleme işlecini ( << ) kullanır.
cin "see-in" olarak telaffuz edilir. Giriş için kullanılır ve çıkarma işlecini ( >> ) kullanır.
*/

// Kullanıcının girdiği iki sayıyı toplayan bir program yazalım.

int x, y;
int toplam;
cout << "ilk rakamı girin: ";
cin >> x;
cout << "ikinci rakamı girin: ";
cin >> y;
toplam = x + y;
cout << "Girilen iki rakamın toplamı: " << toplam;

return 0;
}
