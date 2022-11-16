#include <iostream>
using namespace std;

void tambah(double a,double b){
  double hasil;
  hasil = a+b;
  cout <<"Hasil Pertambahan adalah = "<<hasil<<endl;
}

void kurang(double a,double b){
  double hasil;
  hasil = a-b;
  cout <<"Hasil Pengurangan adalah = "<<hasil<<endl;
}

void kali(double a,double b){
  double hasil;
  hasil = a*b;
  cout <<"Hasil Pertambahan adalah = "<<hasil<<endl;
}

void bagi(double a,double b){
  double hasil;
  hasil = a/b;
  cout <<"Hasil Pertambahan adalah = "<<hasil<<endl;
}

int main(){
  int a,b;
  cout <<"Program Kalkulator simple.\n";
  cout <<"==========================\n";

  cout <<"Masukkan Bilangan pertama : ";
  cin >> a;
  cout <<"Masukkan Bilangan kedua : ";
  cin >> b;
  
  tambah(a,b);
  kurang(a,b);
  kali(a,b);
  bagi(a,b);
        
}