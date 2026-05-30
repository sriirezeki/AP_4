#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan
void pesan() {
    cout << "===== Welcome Genii O'Four =====" << endl;
}

//fungsi dengan nilai balikan
int tambah (int a, int b) {
    return a + b;
}

int kali (int a, int b) {
    return a * b;
}

//fungsi overload : tipe namanya sama tapi parameternya berbeda atau bisa juga di  jumlahnya atau tipe fungsinya yang berbeda.
int kali (int a, int b, int c) {
    return a * b * c;
}

float kali (float a, float b) {
    return a * b;
}

//Fungsi rekursif : fungsi yang memanggil dirinya sendiri. contohnya: faktorial
long faktorial (int x) {
    if (x == 0 || x == 1) {
        return 1;
    }else {
        return x * faktorial (x - 1);
    }
}

int main () {
    system("cls");
    int x = 7, y = 3, z = 2;

    cout << "Fungsi void" << endl;
    pesan();

    cout << endl;

    cout << "Fungsi dengan nilai balikan" << endl;
    int hasiltambah = tambah (x,y); //karena di dalam fungsi tadi ga ada variabel maka kita buat variabel baru buat nyimpan nilai return nya (digunakan kalau memang nilai balikannya digunakan lagi di program setelahnya). tapi bisa juga ga usah pake variabel baru kalau memang penggunaannya cuma sekali. tapi disarankan buat variabel aja biar ga beratin compilernya. 
    cout << "Hasil tambah = " << hasiltambah << endl;
    cout << tambah (x,y) << endl << endl;

    cout << "Fungsi overload" << endl;
    int hasilkali = kali (x,y);
    cout << "Hasil kali (int 2) = " << hasilkali << endl;
    int hasilkali3 = kali (x,y,z);
    cout <<"Hasil kali (int 3) = " << hasilkali3 << endl;
    float hasilkalifloat = kali(2.5f, 3.1f); //kalau hitung float di cpp harus pakai f. 
    cout <<"Hasil kali pecahan = " << hasilkalifloat << endl << endl;

    cout << "Fungsi rekursif" << endl;
    int faktor = faktorial(x);
    cout << "Faktorial x = " << faktor << endl;
}

