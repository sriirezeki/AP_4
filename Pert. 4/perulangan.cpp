#include <iostream>
using namespace std;

int main ()
{
    system ("cls");

//     // goto : pergi ke..
//     // goto A;
//     // B:
//     // cout << "adalah ";
//     // goto C;
//     // E:
//     // cout << "Komputer ";
//     // goto F;
//     // C:
//     // cout << "anak ";
//     // goto D;
//     // A:
//     // cout << "Aku ";
//     // goto B;
//     // F:
//     // cout << "USU.";
//     // goto selesai;
//     // D:
//     // cout << "Ilmu ";
//     // goto E;
//     // selesai:

//     // Menampilkan angka kelipatan 5
//     int i = 40;

//     lipat:
//     if (i%5 == 0) {
//         cout << i << " ";
//     }
//     i--;

//     if (i >= 5) {
//         goto lipat;
//     }
//     cout << endl;
// }

// // While statement : periksa kondisinya dulu baru jalanin.
// // int i = 10;
// // while (i >= 1) {
// //     cout << i << ".  Lorem" << endl;
// //     i--;
// // }

// // Do while statement : mengerjakan program minimal sekali baru cek kondisinya.
// int i = 10;
// // string ulang;
// cout << "\nini Do While\n"
// // do {
// //     cout << i << ". Lorem" << endl;
// //     cout << "Mau ngulang ga?";
// //     cin >> ulang;
// // } while (ulang == "ulang");
// // cout << endl;

// For loop : digunakan jika batas perulangannya sudah jelas
// For (inisialisasi, kondisi, indrement/decrement)
// for (int i = 1; i <= 5; i++) {
//     cout << "Hidup Jowoki!\n";
// }
// cout << endl;

// Atribut length ()
// string kata;
// cout << "Masukkan kata: ";
// cin >> kata;
// for (int i = 0; i < kata.length(); i++) {
//}


// Nested for
for (int i = 1; i <= 5; i++) { //baris
    for (int j = 1; j <= i; j++) { //kolom
        cout << "* ";
    }
} cout << endl;

}
