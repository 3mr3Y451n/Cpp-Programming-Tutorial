#include <iostream>
#include <string>
using namespace std;

int main(){

/*

kullanıcı tarafından girilen bir diziyi görüntülemek için, 
cin komutuyla birlikte çıkarma işleci >> (extraction operator) kullanılır.

*/

string ilkAd;
cout << "Adınızı girin: ";
cin >> ilkAd; // get user input from the keyboard
cout << "Adınız: " << ilkAd << endl;

// Adınızı girin: emre
// Adınız: emre

/*
Ancak cin, boşluğu (boşluk, sekmeler vb.) sonlandırma karakteri olarak kabul eder, 
bu da (çok sayıda kelime yazsanız bile) yalnızca tek bir kelimeyi görüntüleyebileceğiniz anlamına gelir.
*/

string tamAd;
cout << "Ad soyad girin: ";
cin >> tamAd;
cout << "adınız: " << tamAd << endl;

// Type your full name: emre yasin
// Your name is: emre

//yukarıdaki örnekten, programın "emre yasin" yazdırmasını beklersiniz, ancak yalnızca "emre" yazdırır.

/*
That's why, when working with strings, we often use the getline() function to read a line of text. 
It takes cin as the first parameter, and the string variable as second
*/

string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName << endl;

// Type your full name: John Doe
// Your name is: John Doe

    return 0;
}
