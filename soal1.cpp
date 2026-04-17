#include <iostream>
using namespace std;

int main(){
    int angka,number;//variabel angka yang akan dikalikan dan variabel hasil perkalian
    cout<<"masukkan kelipatan angka: "; //output untuk meminta user memasukkan angka yang akan dikalikan
    cin>>angka; //menyimpan input dari user ke variabel angka

    for(number=1; number<=10; number++){//loop untuk mengalikan angka dengan angka dari 1 sampai 10
        cout<<number*angka<<"\t"; //output untuk menampilkan hasil perkalian angka dengan number, dipisahkan dengan tab
    }
    
    return 0;
}
