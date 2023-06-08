#include <iostream>
using namespace std;

int main() {

// C++ Değişkenleri

/*

int     123 veya -123 gibi tamsayıları (tam sayılar) ondalık olmadan saklar.
double  19.99 veya -19.99 gibi ondalık basamaklı kayan noktalı sayıları saklar.
char    'a' veya 'B' gibi tek karakterleri saklar. Karakter değerleri tek tırnak içine alınır.
string  "Merhaba Dünya" gibi metinleri saklar. Dize değerleri çift tırnak içine alınır.
bool    değerleri iki durumla saklar: doğru veya yanlış.

Değişkenleri Bildirme (Oluşturma)

type variableName = value;

*/

// int tipinde bir değişken oluşturup buna 15 değerini atayalım:

int sayi = 15;
cout << sayi << endl;

//Ayrıca, değer atamadan bir değişken bildirebilir ve değeri daha sonra atayabiliriz:

int numaram;
numaram = 15;
cout << numaram << endl;

//Mevcut bir değişkene yeni bir değer atarsak, önceki değerin üzerine yazılacaktır.

int numara = 15;  // numara is 15
numara = 10;  // Now numara is 10
cout << numara << endl;  // Outputs 10

//Diğer çeşitler

int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

//Değişkenleri Görüntüleme

/* cout nesnesi, değişkenleri göstermek için << operatörü ile birlikte kullanılır.
metin ve değişkenleri << operatörü ile birbirinden ayırarak, birlikte kullanabiliriz.
*/

int myAge = 35;
cout << "I am " << myAge << " years old."<< endl;

// +  operatörü ile değişken derğerlerini birbirine ekleyebiliriz.

int x = 5;
int y = 6;
int sum = x + y;
cout << sum;


return 0;
}
