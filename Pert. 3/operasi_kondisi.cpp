#include <iostream>
using namespace std;

int main ()
{
    system ("cls");
    int x;

    cout << "Masukkan nilai: ";
    cin >> x;

    // // If statement
    // if (x > 75) {
    //     cout << "Anda lulus" << endl;
    // }

    // If else statement
    // if (x > 75) {
    //     cout << "Anda lulus" << endl;
    // } else {
    //     cout << "Anda tidak lulus" << endl;
    // }

    // If else if statement
    string lampu;
    // cout << "Kondisi: ";
    // getline(cin, lampu);

    // if (lampu == "Hijau") {
    //     cout << "Silahkan jalan" << endl;
    // } else if (lampu == "Kuning") {
    //     cout << "Berhati-hati" << endl;
    // } else if (lampu == "Merah") {
    //     cout << "Berhenti" << endl;
    // } else {
    //     cout << "Nilai invalid!" << endl;
    //     return 0; // mereturnkan nilai false, sehingga program ga ngejalanin apa apa
    // }

    // Nested If Statement
    // if (x >  75) {
    //     cout << "Anda lulus" << endl;
    //     if (x == 100) {
    //         cout << "Nilai anda sempurna" << endl;
    //     }
    // } else {
    //     cout << "Anda tidak lulus" << endl;
    // }

    // Switch case statement : case of di pascal 
    // switch (x) {
    //     case 1 :
    //         cout << "Senin" << endl;
    //         break; //efisien program, jadi kalau udah nemu yang benar dia langsung output kan aja ga perlu cek program yang di bawahnya lagi. Harus digunakan kalau pakai switch case. 
    //     case 2 :
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3 :
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4 :
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5 :
    //         cout << "Jumat" << endl;
    //         break;
    //     default :
    //         cout << "Libur" << endl;
    //         break;
    // }

    // Switch range 
    // switch (x) {
    //     case 85 ... 100: cout << "A" << endl; break;
    //     case 80 ... 84: cout << "B" << endl; break;
    //     case 70 ... 79: cout << "C" << endl; break;
    //     case 20 ... 69: cout << "D" << endl; break;
    //     case 0 ... 19: cout << "E" << endl; break;
    //     default : cout << "Nilai invalid" << endl; break;
    // }

    //Ternary operator
    // string cek = (x % == 0) ? "Genap" : "Ganjil";
    // cout << x << " itu adalah bilangan " << cek << endl;

}
