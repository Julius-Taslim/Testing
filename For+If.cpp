//for + if
#include <iostream>
using namespace std;

int main(){
    int a;
    char ulang;
    
    for (a = 1; a <= 10;a++){
        cout <<"Ingin mengulang kembali? (Y/T) = ";
        cin >> ulang;
        if (ulang == 'T'||ulang =='t'){
            break;
        } 
        a--;
    }
    cout <<"Program telah berhenti.";
    return 0;
}