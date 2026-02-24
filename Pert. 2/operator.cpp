#include <iostream>
using namespace std;

int main ()
{
    system("cls");
    int a;
    int b;

    //assignment operator
    a = 5;
    b = 7;

    //aritmethic operator (+, -, *, /, %)
    int tambah = a+b;
    int kurang = a-b;
    int kali = a*b;
    int bagi = a/b;
    float bagii =float(a)/b; //casting salah satu / dua variabel untuk membuat hasilnya menjadi pecahan 
    int mod = a%b;

    cout << "Hasil tambah: " << tambah << endl;
    cout << "Hasil kurang: " << kurang << endl;
    cout << "Hasil kali: " << kali << endl;
    cout << "Hasil bagi (bulat): " << bagi << endl;
    cout << "Hasil bagi (pecahan): " << bagii << endl;
    cout << "Hasil modulo: " << mod << endl;

    cout << endl;

    //relational operator : memmbandingkan kedua nilai dengan operator ==, >, >=, <, <=, !=
    //jika benar akan memberikan output 1 dan 0 jika salah
    // >= / <= itu inklusif cthnya : 7 <= x <= 20 = (7...20)
    // <, > itu ekslusif 
    cout <<"Relational:\n";
    cout << (a==b) << endl;
    cout << (a>b) << endl;
    cout << (a>=b) << endl;
    cout << (a<b) << endl;
    cout << (a<=b) << endl;
    cout << (a!=b) << endl;

    cout << endl;

    //logical operator 
    //and (&&)
    cout <<"Logical:\n";
    cout <<"AND\n";
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << endl;

    //or (||)
    cout <<"OR\n";
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    cout << endl;

    //negasi (!) : membalikkan hasil 
    cout <<"NEGASI\n";
    cout << !true << endl;
    cout << !false << endl;

    cout << endl;
    cout <<"------\n";
    cout << endl;

    //bitwise operator (!, &, |, ~, ^) : menghitung berdasarkan bit nya
    cout <<"Bitwise\n";
    cout << (5&7) << endl;
    cout << (5|7) << endl;
    cout << (~7) << endl;
    cout << (5^7) << endl;
    cout << (7 << 2) << endl; //shl
    cout << (7 >> 2) << endl; //shr

    //shorthand
    // a += 2; //a = a + 2;
    // cout << a << endl;
    
    // a -= 2;
    // cout << a << endl;

    // a *= 2;
    // cout << a << endl;

    // a /= 2;
    // cout << a << endl;

    //increment dan decrement
    //menambahkan atau mengurangkan sebanyak 1

    cout << endl;

    //pre increment
    cout << "Pre increment:\n";
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;

    cout << endl;

    //pre decrement
    cout << "Pre decrement:\n";
    cout << a << endl;
    cout << --a << endl;
    cout << a << endl;

    cout << endl;

    //post increment
    cout << "Post increment:\n";
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << endl;

    //post decrement
    cout << "Post decrement:\n";
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

}
