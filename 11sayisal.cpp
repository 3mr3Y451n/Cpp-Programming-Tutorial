#include <iostream>

using namespace std;

int main(){

//Tam sayı tutmak için int, ondalıklı sayı tutmak için için ise float veya double kullanırız.

//int
int myInt = 1000;
cout << myInt << endl;

//float
float myFloat = 5.75;
cout << myFloat << endl;

//double
double myDouble = 19.99;
cout << myDouble << endl;


/*
float vs.double
Kayan noktalı bir değerin kesinliği ,
değerin ondalık noktadan sonra kaç basamak olabileceğini gösterir.
float değişkenlerin kesinliği yalnızca altı veya yedi ondalık basamakken,
double değişkenlerin kesinliği yaklaşık 15 basamaktır.
Bu nedenle , çoğu hesaplama için double kullanmak daha güvenlidir .
*/

//Bilimsel Sayılar
//Bir kayan noktalı sayı, 10'un kuvvetini belirtmek için "e" harfine sahip bilimsel bir sayı da olabilir:

float f1 = 35e3;
double d1 = 12E4;
cout << f1 << endl;
cout << d1 << endl;

return 0;
}
