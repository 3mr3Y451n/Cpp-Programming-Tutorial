#include <iostream>
#include <string>
//using namespace std;

int main(){

//Ad Alanını Atlamak, İhmal Etmek

/*

Standart ad alanı kitaplığı olmadan çalışan bazı C++ programları görebilirsiniz. 
using namespace std satırı kullanılmayabilir ve bunun yerine std anahtar sözcük, 
ardından da iki adet noktalı virgül operatörü (::) ile string ve cout nesneleri kullanılabilir.

*/

std::string selamlama = "Merhaba";
std::cout << selamlama<<"\n";

//Standart ad alanı kitaplığını (using namespace std) dahil etmek isteyip istemediğiniz size kalmıştır.

    return 0;
}