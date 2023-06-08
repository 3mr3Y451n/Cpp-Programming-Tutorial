#include <iostream>
using namespace std;

int main() {

/*

Yorumlar, C++ kodunu açıklamak ve daha okunaklı hale getirmek için kullanılabilir.
Alternatif kodu test ederken yürütmeyi önlemek için de kullanılabilir.
Yorumlar tek satırlı veya çok satırlı olabilir.

*/

// Tek satırlık Yorumlar
/*
Tek satırlık yorumlar iki eğik çizgi ( //) ile başlar.

Satırın sonu ile // arasındaki herhangi bir metin derleyici tarafından yoksayılır (yürütülmez).
*/

  // This is a comment
  cout << "Hello World!";
  cout << "Hello World!"; // This is a comment

// Çok satırlık Yorumlar
/*
Çok satırlı yorumlar /* ile başlar ve */ //ile biter.

/*ve arasındaki herhangi bir metin */ //derleyici tarafından dikkate alınmaz:


/* The code below will print the words Hello World!
to the screen, and it is amazing */
    cout << "Hello World!";

  return 0;
}

