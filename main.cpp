#include <iostream>

using namespace std;

/*
    NAMA    : FARHAN APRI KESUMA
    NIM     : 121140179
    KELAS   : RC(RC)

    Link source code:
    GitHub : 
    Repl.it: 
*/

//fungsi enkripsi menggunakan prinsip tabel ASCII
void encryptedFunc(string x)
{
    char temp;//variabel temporary bertipe char untuk mengakses tiap karakter string

    //proses enkripsi dicek dan diganti setiap karakternya dengan perulangan for
    for (int i = 0; x[i] != '\0'; i++)
    {
        temp = x[i];

        //untuk karakter huruf kapital (upper)
        if (temp >= 65 && temp <= 90)
        {
            temp = 155 - temp;
            x[i] = temp;
        }

        //untuk karakter huruf kecil (lower)
        if (temp >= 97 && temp <= 122)
        {
            temp = 219 - temp;
            x[i] = temp;
        }
    }

    cout << "\n" << x << endl; //menampilkan hasil enkripsi
}

int main()
{
    int ManyMessage;//variabel jumlah pesan

    system("cls");//agar system membersihkan terminal terlebih dahulu
    cout << "Input Many Message: "; cin >> ManyMessage;//input jumlah pesan

    string text[ManyMessage];

    cout << "\n";
    for(int i = 0; i < ManyMessage; i++)
    {
        cin.ignore();
        cout << "Message " << i + 1 << ": "; getline(cin, text[i]);//input pesan ke - i

        cout << "OUTPUT:";
        encryptedFunc(text[i]);//enkripsi dan menampilkan hasil enkripsi pesan ke - i 
    }

}
