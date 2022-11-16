#include <iostream>
using namespace std;

double tambah(double x, double y){

  return x+y;
}
double kurang(double x, double y){

  return x-y;
}
double kali (double x, double y){

  return x*y;
}
double bagi (double x, double y){

  return x/y;
}


int main() {
  double bil1,bil2;

  cout <<"Kalkulator Sederhana Menggunakan Fungsi.\n"
         "========================================\n";
  
  cout <<"Masukkan Bilangan Pertama : ";
  cin >>bil1;
  cout <<"Masukkan Bilangan Kedua : ";
  cin >>bil2;

  cout <<"Hasil Tambah dari kedua angka tersebut adalah = "<< tambah(bil1,bil2)<<endl;
  cout <<"Hasil Kurang dari kedua angka tersebut adalah = "<< kurang(bil1,bil2)<<endl;
  cout <<"Hasil Kali dari kedua angka tersebut adalah = "<< kali(bil1,bil2)<<endl;
  cout <<"Hasil Bagi dari kedua angka tersebut adalah = "<< bagi(bil1,bil2)<<endl;

  return 0;
}