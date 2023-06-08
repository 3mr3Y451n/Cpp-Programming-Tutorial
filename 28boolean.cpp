#include <iostream>
using namespace std;

int main(){

/*

Çoğu zaman, program yazarken, 
aşağıdaki gibi iki değerden yalnızca birine sahip olabilen bir veri türüne ihtiyacımız olacaktır.

evet/hayır   (yes/no)
açık/kapalı  (on/off)
doğru/yanlış (true/false)

*/

//Bunun için C++ (1) veya (0) booldeğerlerini alabilen bir veri tipine sahiptir.truefalse

/*
Bunun için C++ true(1) veya false(0) bool değerlerini alabilen bir veri tipine sahiptir.
Bir boole değişkeni, bool anahtar sözcüğüyle bildirilir ve 
yalnızca true veya false değerlerini alabilir.
*/

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << "kodlama eğlenceli mi? : " << isCodingFun << "\n";  // Outputs 1 (true)
    cout << "balık lezzetli mi? : " << isFishTasty << "\n";  // Outputs 0 (false)

//true 1 değerini döndürürken false 0 değerini döndürür.
//Ancak, değerleri ve değişkenleri karşılaştırarak bir boole değeri döndürmek daha yaygın bir kullanımdır

    return 0;
}