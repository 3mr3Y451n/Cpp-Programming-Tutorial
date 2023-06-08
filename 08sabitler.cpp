#include <iostream>

using namespace std;

int main(){

/*

Mevcut değişken değerlerinin değiştirmesini istemediğinizde, const anahtar kelimeyi kullanmalıyız .
Bu, değişkeni "sabit" olarak bildirir, yani değiştirilemez ve salt okunur anlamına gelir.

*/

const int myNum = 15;  // myNum will always be 15
//myNum = 10;  // error: assignment of read-only variable 'myNum'

//Değişmesi muhtemel olmayan değerleriniz olduğunda değişkeni her zaman sabit olarak bildirmelisiniz.

const int minutesPerHour = 60;
const float PI = 3.14;

return 0;
}
