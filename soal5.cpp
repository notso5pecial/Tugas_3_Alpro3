#include <iostream>
using namespace std;

int main(){
    int angka; //variabel untuk menyimpan angka yang akan dicek
    cout<<"cek angka prima atau tidak"<<endl;
    cout<<"masukkan angka: "; //output untuk meminta user memasukkan angka
    cin>>angka; //menyimpan input dari user ke variabel angka

    if (angka <= 1){ //angka 1 atau kurang tidak termasuk angka prima
        cout<<angka<<" bukan angka prima"<<endl; //output jika angka yang dimasukkan adalah 1 atau kurang
        return 0;
    }

    for (int i=2; i<angka; i++){ //loop memeriksa angka input apakah habis dibagi dengan angka selain 1 dan dirinya sendiri
        if (angka % i == 0){ //jika angka habis dibagi dengan i, maka angka bukan prima
            cout<<angka<<" bukan angka prima"<<endl; //output jika angka bukan prima
            return 0;
        }
    }
    cout<<angka<<" adalah angka prima"<<endl; //output jika angka adalah prima
    return 0; //mengembalikan nilai 0 untuk menandakan program selesai dengan sukses

}
