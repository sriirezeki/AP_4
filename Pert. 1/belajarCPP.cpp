#include <iostream> //header standart c++
#include <conio.h> //header untuk pakai getch (), getche(), putchar()
using namespace std; //directive c++

int main() //fungsi utama
{
    system ("cls");
    string nama, nim, waktu;
    char kom, JK;
    float ipk;


    // cout << "Hello world\n";
    // cin >> nama; 

    // cout << nama;

    cout <<"Masukkan Nama : ";
    getline(cin, nama);
    // cout << nama; 

    cout <<"Masukkan Kom : ";
    cin >> kom;
    cout <<"Masukkan NIM : ";
    cin >> nim;
    cout <<"Masukkan IPK : ";
    cin >> ipk;

    cout << "Masukkan jenis kelamin anda (L/P): ";
    JK = getche();

    cout << endl;

    cout << "Nama: " << nama << endl;
    cout << "Kom: " << kom << endl;
    cout << "NIM: " << nim << endl;
    cout << "IPK: " << ipk << endl;
    cout << "Jenis Kelamin: ";
    putchar(JK);
    cout << endl;

    // inputan waktu (pagi, siang, sore, malam)
    // Selamat pagi, nama!

    cout <<"Masukkan waktu: ";
    cin >> waktu;
    cout << waktu;

    cout << "\nSelamat " << waktu << ", " << nama <<"!"; 

    getch(); //bisa digunakan untuk membuat pw karena ga ditampilin ke layar. Juga untuk membuat program tidak langsung diselesaikan oleh compiler.
}
// getch : get character dan tidak ditampilin ke layar
// getche : get character and echo. kita menampilkan apa yang sudah kita input 
// putchar : sama kayak cout, put character dari variabel yang sudah diinput 