#include <iostream>
using namespace std;

int main() {

/*

Bir Boole ifadesi,1 (doğru) veya 0 (yanlış) olan bir boole değeri döndürür .
Bu, mantık oluşturmak ve cevaplar bulmak için kullanışlıdır.
Bir ifadenin (veya değişkenin) doğru mu yoksa yanlış mı olduğunu öğrenmek için 
büyüktür ( > ) operatörü gibi bir karşılaştırma operatörü kullanabiliriz.

*/

    int x = 10;
    int y = 9;
    cout << (x > y); // returns 1 (true), because 10 is higher than 9

    // daha basitçe
    cout << (10 > 9); // returns 1 (true), because 10 is higher than 9

    //Aşağıdaki örneklerde, bir ifadeyi değerlendirmek için eşittir ( == ) operatörünü kullanıyoruz.

    x = 10;
    cout << (x == 10);  // returns 1 (true), because the value of x is equal to 10

    //daha basitçe
    cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15

    //Bir kişinin oy verecek yaşta olup olmadığını öğrenmemiz gerektiğini düşünelim.

    int myAge = 25;
    int votingAge = 18;

    cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!

    //daha iyi bir yaklaşımla

    myAge = 25;
    votingAge = 18;

    if (myAge >= votingAge) { // true yani 1 döner.
        cout << "Old enough to vote!"; // if bloğu çalışır. Çıktı: Old enough to vote!
    } else {
        cout << "Not old enough to vote."; // else bloğu çalışmaz
    }   

    return 0;
}
