//While + if
#include <iostream>
using namespace std;

int main(){
    int a=1;
    char ulang;
    
    while (a <= 10){
        cout <<"Ingin mengulang kembali? (Y/T) = ";
        cin >> ulang;
        if (ulang == 'T'||ulang =='t')
        break; 
        a--;
    }
    cout <<"Program telah berhenti.";
    return 0;
}