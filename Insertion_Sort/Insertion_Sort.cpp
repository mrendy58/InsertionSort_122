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
    cout << endl;                                       // Membuat jarak perbaris program
    cout << "======================" << endl;           // Membuat susunan data elemen array
    cout << "masukan Element Array" << endl;
    cout << "======================" << endl;

    // Menggunakan perulangan for untuk menyimpan data pada Array
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ":";       //  memasukan atau menginputkan nilai data n
        cin >> arr[i];                              // memasukan nilai data n kedalam Array arr
    }
};
// procedure Insertionsort
void insertionsort()
{

    int temp;           //membuat variable data temporer atau penyimpanan sementara
    int j;              // membuat variable sebagai penanda

    for (int i = 1; i, n; i++)         // 1.Looping dengan 1 dimulai dari 1 hingga n-1
    {
        temp = arr[i];                 // 2. simpan nilai arr[i] ke variable sementara temp
        j = i - 1;                     // 3. setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j] > temp) //4. Lopping while dimana nilai j lebih besar sama dengan 0 dan
        {                               // arr[j] lebih besar daripada temp
            arr[j + i] = arr[j];        //a. simpan arr[j] ke dalam variable arr[j + 1]
            j--;                        //b. Decrement nilai j by 1

        }
        arr[j + 1] = temp;              // 5. simpan nilai temp ke dalam arr[j + 1]


        cout << endl;
        cout << "\nPass" << i << ":";       // output ke layar
        for (int k = 0; k < n; k++)         // Looping nilai k dimulai dari 0 hingga n-1
        {
            cout << arr[k] << "";           //output ke layar
        }
    }
};

void display()
{
    cout << endl;                                                   //output baris kosong
    cout << "Total Element Movement =" << n-1 << endl;              //cout movement element
    cout << "\n===================================\n" << endl;      //output ke layar
    cout << "Element Array yang telah tersusun" << endl;            //output ke layar
    cout << "===================================" << endl;          // output ke layar

    for (int j = 0; j < n; j++)                   // Looping dengan j dimulai dari 0 hingga n-1
    {
        cout << arr[j] << endl;                  // output ke layar
    }
    cout << endl;                                // output baris kosong

}





int main()
{
    input();                //memanggil input
    insertionsort();        //memanggil insertionsort
    display();              //memanggil display
}

