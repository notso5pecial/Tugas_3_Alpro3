#include <iostream>
using namespace std;

int main() {
    int n, total = 0; 
    cout << "Masukkan n: ";
    cin >> n;
    
    for (int i = 2; i <= n; i += 2) { 
        total = total + (i * i); 
    }
    
    cout << "Total = " << total;
    return 0;
}

//deklarasi total=0 dulu biar nilai awalnya ada
//dari i = 2, selama i lebih kecil dari n maka akan dioperasikan, i+=2 karena yang dihitung hanya bilangan genap sampai n, loop terus sampai n
