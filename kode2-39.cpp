/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char *pch;
  char str[] = "Bisa Karena Belajar";
  // melakukan pencarian karakter 'l'
  pch = (char*) memchr(str, 'l', strlen(str));
  
  cout<<"kalimat : "<<str<<endl;
  cout<<"karakter: "<<pch<<endl;
  
  if (pch!=NULL) {
    cout<<"'l' ditemukan pada indeks ke-"
	    <<pch-str;
  } else {
    cout<<"'l' tidak ditemukan";
  }
  
  return 0;
}
