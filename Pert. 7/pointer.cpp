#include <iostream>
using namespace std;

// int tambahBiasa (int par1, int par2) {
//     par1 += par2;
//     return par1;
// }

// int tambahPointer (int *par1, int *par2) {
//     *par1 += *par2;
//     return *par1;
// }

int main() {
    system("cls");

    // int var = 10;
    // int *ptr;

    // ptr = &var;

    // cout << "ALAMAT dari VARIABEL var                   --> " << &var << endl;
    // cout << "ALAMAT YANG DITUNJUK oleh pointer          --> " << ptr << endl;
    // cout << "ISI dari ALAMAT YANG DITUNJUK oleh pointer --> " << *ptr << endl;

    //Case dimana pointer not exactly "menunjuk" sebuah variabel, melainkan menunjuk sebuah nilai (array)
    // char *ptr;
    // ptr = "Jakarta";

    // cout << ptr << endl;
    // cout << *ptr << endl;

    // //Pointer langsung ke char
    // char *ptr;
    // *ptr = 'b';

    // cout << ptr;

    //Ini adalah contoh penggunaan pointer yang salah
    //Pointer to undefined behaviour
    // int *ptr;
    // *ptr = 10;

    // cout << ptr;
    // cout << *ptr;
    // cout << "hai";

    //Operasi logika pada var pointer
    // int a = 100, b = 200;
    // int *pa, *pb;

    // pa = &a;
    // pb = &b;

    // cout << pa << endl;
    // cout << pb << endl;

    // if (pa > pb) {
    //     cout << "alamat pa > pb" << endl;
    // } else if (pb > pa) {
    //     cout << "alamat pa < pb" << endl;
    // } else if (pb == pa) {
    //     cout << "alamat pa = pb" << endl;
    // }

    // if (*pa > *pb) {
    //     cout << "isi pa > pb" << endl;
    // } else if (*pb > *pa) {
    //     cout << "isi pa < pb" << endl;
    // } else if (*pb == *pa) {
    //     cout << "isi pa = pb" << endl;
    // } 

    //Pointer to array
    int arr [] = {10,20,30,40,50,60};
    int *ptr1;

    ptr1 = arr; //kalau array ga usah pakai &, otomatis bakal nunjuk elemen indeks 0

    cout << "Alamat yang ditunjuk pointer: " << ptr1 << endl;
    cout << "Alamat yang ditunjuk array index 0: " << &arr[0] << endl;
    cout << "Alamat yang ditunjuk array index 1: " << &arr[1] << endl;
    cout << "Isi dari alamat yang ditunjuk pointer: " << *ptr1 << endl;
    cout << "Isi dari alamat yang ditunjuk pointer + 1: " << *(ptr1+1) << endl;

    //Pointer in array of char
    char arr1[] = "Indonesia";
    char *ptr2;

    ptr2 = arr1;
    cout << "Alamat yang ditunjuk pointer: " << ptr2 << endl;
    cout << "Alamat yang ditunjuk array index 0: " << &arr1[0] << endl;
    cout << "Alamat yang ditunjuk array index 5: " << &arr1[5] << endl;
    cout << "Isi dari alamat yang ditunjuk pointer: " << *ptr2 << endl;
    cout << "Isi dari alamat yang ditunujuk pointer +3: " << *(ptr2+1) << endl;

    //Pointer to pointer
    string var = "JOKO";
    string *ptr, **ptr_2;

    ptr = &var;
    ptr_2 = &ptr;

    cout << "Nilai var : " << var << endl;
    cout << "Nilai pointer 1 (no bintang) : " << ptr << endl;
    cout << "Nilai pointer 1 (1 bintang) : " << *ptr << endl;
    cout << "Nilai Pointer 2 (2 bintang)    : " << **ptr_2 << endl;

    // Pointer as parameter
    // int a = 10, b = 5;
    // cout << "Hasil dari fungi biasa   : " << tambahBiasa(a,b) << endl;
    // cout << "Nilai A setelah penjumlahan -->" << a << endl << endl;
    
    // cout << "Hasil dari fungi pointer : " << tambahPointer(&a,&b) << endl;
    // cout << "Nilai A setelah penjumlahan -->" << a << endl;

    // Dynamic pointer
    // int *ptr = new int;
    // *ptr = 30;

    // cout << "Isi variabel ptr: " << *ptr << " dan alamat variabel ptr: " << &ptr << endl;

    // delete ptr; // deallocation
    // cout << "Isi variabel ptr: " << *ptr << " dan alamat variabel ptr: " << &ptr << endl;
}

