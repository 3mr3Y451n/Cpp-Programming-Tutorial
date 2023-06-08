#include <iostream>
#include <string>
using namespace std;

int main(){

/*

uzunluğu
Bir dizenin uzunluğunu almak için length() işlevini kullanabiliriz.

*/

// length()

string txt = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";
cout << "Türkçe karakterler içeren txt dizesinin uzunluğu: " << txt.length() << endl;

/*
Bir dizenin uzunluğunu almak için size() işlevini kullanan bazı C++ programları görebilirsiniz.
Bu length() işlevi kullanan başka bir işlevdir.
length() veya size() kullanmak isteyip istemediğiniz tamamen size kalmıştır.
*/

//size()

txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "ingilizce karakterler içeren txt dizesinin uzunluğu: " << txt.size();

    return 0;
}
