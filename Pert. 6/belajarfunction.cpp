#include <iostream>
using namespace std;

void sapa (string nama) { //void tidak menerima nilai balikan apapun (return value)
    cout <<"Halo, apa kabar " << nama << "! Selamat belajar CPP!" << endl;
}

int main () {
    system("cls");
    string namapengguna = "Oryza";
    sapa(namapengguna);
    return 0;
}


