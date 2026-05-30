#include <iostream>
using namespace std;

class contohakses {
    private:
    int privatevar;

    protected:
    int protectedvar;

    public:
    int publicvar;

    //constructor
    contohakses() {
        privatevar = 1;
        protectedvar = 2;
        publicvar = 3;
    }

    // //constructor berparameter
    // contohakses(int x) {
    //     privatevar = x;
    //     protectedvar = 2;
    //     publicvar = 3;
    // }

    void tampilkansemua () {
        cout << "Akses dari dalam class : " << endl;
        cout << privatevar << endl;
        cout << protectedvar << endl;
        cout << publicvar << endl;
    }
};

class turunan : public contohakses {
    public:
    void aksesprotected() {
        cout << "Akses dari dalam class turunan : " << endl;
        // cout << privatevar << endl;
        cout << protectedvar << endl;
        cout << publicvar << endl;
    }

};

int main() {
    system ("cls");
    contohakses obj;
    obj.tampilkansemua();
    cout << "Akses dari luar class : " << endl;
    cout << obj.publicvar << endl;
    // cout << obj.protectedVar << endl; //Error
    // cout << obj.privateVar << endl; //Error
    
    turunan tur;
    tur.aksesprotected ();
    system ("pause");
}