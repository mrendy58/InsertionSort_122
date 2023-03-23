#include <iostream>
using namespace std; 

int arr[20];        // membuat array dengan panjang data 20
int n;              // membuat variable inputan n

void input()
{
    while (true)
    {   // Procedure input

        cout << "Masukan Jumlah Data Pada Array :";     // Membuat input jumlah element Array
        cin >> n;                                       // memanggil variable inputan n

        if (n <= 20)
        {   // membat kondisi n tidak lebih dari 20

            break;

        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 elemen. \n";  // Menampilkan pesan jika data lebih dari 20
        }

    }
    
}








int main()
{
    std::cout << "Hello World!\n";
}

