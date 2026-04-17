#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    char huruf;
    int hapus = 0; 
    
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    cout << "Masukkan huruf: ";
    cin >> huruf;
    
    for (int i = 0; i < kalimat.length(); i++) { 
        if (kalimat[i] == huruf) { 
            hapus++; 
        } else {
            cout << kalimat[i]; 
        }
    }
    
    cout << endl << "\nKarakter terhapus = " << hapus;
    return 0;
}

//Deklarasi nilai hapus (berapa banyak huruf yg dihapus) mulai dari 0 biar jelas pas di increment
//Menggunakan getline(cin, kalimat) biar char spasi ikut terbaca
//selama i lebih kecil dari panjang kalimat, lakukan:
//dicek satu satu perhuruf kalimat, kalau hurufnya adalah huruf yang ingin dihapus maka hapus increment sebagai penghitung seberapa banyak huruf yang dihapus
//kalau huruf bukan huruf yang ingin dihapus maka huruf akan dicetak, dan akan di loop terus sampai huruf habis
