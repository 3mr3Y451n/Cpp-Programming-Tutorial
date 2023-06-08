#include <iostream>

using namespace std;

int main(){

// Yeni satır eklemek için \n karakteri eklenmelidir.

    cout << "Merhaba Dünya!\n";
    cout << "C++ öğreniyorum.\n";

// Yeni satır eklemenin diğer yolu ise endl manipülatörüdür.

    cout << "Merhaba Dünya!" << endl;
    cout << "C++ öğreniyorum.";

    return 0;
}

/*

Hem \n hem de endl satırları sonlandırmak için kullanılır. Ancak \n en çok kullanılandır.

\n tam olarak nedir?
Yeni satır karakterine (\n) kaçış dizisi denir ve
imlecin konumunu, ekrandaki bir sonraki satırın başına değiştirmeye zorlar.
Bu, yeni bir satırla sonuçlanır.
Diğer geçerli kaçış dizilerinin örnekleri şunlardır:

Kaçış karakteri Açıklama
\t	            tab
\\	            sola yatık kesme (\)
\"	            çift tırnak

*/
