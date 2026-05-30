#include <iostream>
#include <vector>
using namespace std;

struct alamat {
    string jalan;
    string kota;
};

struct mahasiswa {
    string nama;
    string nim;
    alamat al; //Nested struct. Memanggil struct alamat. 
    int umur;
    float ipk;
};

int main () {
    system ("cls");

    mahasiswa mhs;
    mhs.nama = "Sri Rezeki";
    mhs.nim = "251401083";
    mhs.umur = 19;
    mhs.ipk = 4.00;

    cout << "Nama : " << mhs.nama << endl;
    cout << "NIM : " << mhs.nim << endl;
    cout << "Umur : " << mhs.umur << endl;
    cout << "IPK : " << mhs.ipk << endl << endl;

    //Akses menggunakan pointer
    mahasiswa *ptrmhs = &mhs;
    cout << "Akses menggunakan pointer" << endl;
    cout << "Nama : " << ptrmhs->nama << endl;
    cout << "NIM : " << ptrmhs->nim << endl;
    cout << "Umur : " << ptrmhs->umur << endl;
    cout << "IPK : " << ptrmhs->ipk << endl << endl;

    mahasiswa m2;
    cout << "Nama : ";
    getline(cin, m2.nama);
    cout << "NIM : ";
    getline(cin, m2.nim);
    cout << "Umur : ";
    cin >> m2.umur;
    cin.ignore(); //enternya dihiraukan atau dihapus
    cout << "IPK : ";
    cin >> m2.ipk;
    cin.ignore();

    //Menggunnakan vektor
    mahasiswa m3;
    vector <mahasiswa> mList;
    int n;
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;
    cin.ignore();

    cout << "Input data: " << endl;
    for (int i = 0; i < n, i++) {
        cout << "Data Mahasiswa - " << i + 1 << endl;
        cout << "Nama : "; getline(cin, m3.nama);
        cout << "NIM : "; getline(cin, m3.nim);
        cout << "Jalan : "; getline(cin, m3.al.jalan);
        cout << "Kota : " getline(cin, m3.al.kota);
        cout << "Umur : " << m3.umur; cin.ignore();
        cout << "IPK : " << m3.ipk; cin.ignore();
        cout << endl;
        mList.push_back(m3); //untuk memasukkan semua data ke dalam mList
    }

    cout << "Output : " << endl;
    for (int i = 0; i < n, i++) {
        cout << "Data mahasiswa - " << i + 1 << endl;
        cout << "Nama : "; getline(cin, mList[i].nama);
        cout << "NIM : "; getline(cin, mList[i].nim);
        cout << "Jalan : "; getline(cin, mList[i].al.jalan);
        cout << "Kota : "; getline(cin, mList[i].al.kota);
        cout << "Umur : "; mList[i].umur;
        cout << "IPK : "; mList[i].ipk;
    }
}


