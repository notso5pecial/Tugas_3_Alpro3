#include <iostream>
using namespace std;

bool kabisat(int a){ //fungsi untuk mengecek apakah tahun kabisat atau tidak
    return (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0); //syarat tahun kabisat: habis dibagi 4 dan tidak habis dibagi 100, atau habis dibagi 400
}

int main(){
    int tahun,year,interval; //variabel untuk menyimpan tahun yang akan dicek, tahun akhir, dan interval tahun kedepan yang ingin dicek
    cout<<"===mengecek tahun kabisat"<<endl;
    cout<<"start tahun yg di cek: "; //output untuk meminta user memasukkan tahun awal yang akan dicek
    cin>>tahun; //menyimpan input dari user ke variabel tahun
    cout<<"sampai: "; // output untuk meminta user memasukkan tahun akhir yang akan dicek
    cin>>year; //menyimpan input dari user ke variabel year
    cout<<"\n berapa tahun kedepan yg juga ingin anda cek? "; //output untuk meminta user memasukkan interval tahun kedepan yang ingin dicek
    cin>> interval; //menyimpan input dari user ke variabel interval

    cout<<"\n antara "<<tahun<<" sampai "<<year<<endl; //output untuk menampilkan rentang tahun yang akan dicek
    for (int i=tahun; i<=year; i++){ //loop untuk memeriksa setiap tahun dalam rentang yang dimasukkan oleh user
        if (kabisat(i)){ //memanggil fungsi kabisat untuk memeriksa apakah tahun i adalah tahun kabisat
            cout<<i<<" adalah tahun kabisat"<<endl; //output jika tahun i adalah tahun kabisat
        }
        else{
            cout<<i<<" bukan kabisat"<<endl; //output jika tahun i bukan tahun kabisat
        }
    }

    cout<<interval<<" tahun kedepan setelah "<<year<<" adalah "<<year+interval<<endl;
        for(int i=year+1; i<=year+interval; i++){ //loop memeriksa tahun tambahan apakah kabisat atau bukan
            if (kabisat(i)){ //memanggil fungsi kabisat
                cout<<i<<" adalah tahun kabisat"<<endl; //output jika tahun i adalah tahun kabisat
            }
            else{
                cout<<i<<" bukan kabisat"<<endl; //output jika tahun i bukan tahun kabisat
            }
        }
        return 0;

}
