#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n: ";
    cin >> n;
    
    cout << "H";
    for (int i = 0; i < n; i++){
        cout << "o";
    } cout << "r";
    for (int i = 0; i < n; i++){
        cout << "e";
    } for (int i = 0; i < n; i++){
        cout << "!";
    }
    
    return 0;
}

//User memasukkan n yang nantinya akan digunakan untuk loop o, e dan tanda seru
//Cetak H, cetak o sebanyak n kali, cetak r, cetak e dan ! sebanyak n kali
