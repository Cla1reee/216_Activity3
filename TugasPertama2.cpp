#include <iostream>
using namespace std;

int main()
{
    float matematika, fisika, rerata;

    cout << "Masukkan nilai Matematika: ";
    cin >> matematika;

    cout << "Masukkan nilai Fisika: ";
    cin >> fisika;

    rerata = (matematika + fisika) / 2;

    if (matematika > 70 && rerata > 60)
    {
        cout << "Selamat, Anda lulus!" << endl;
    }
    else
    {
        cout << "Maaf, Anda belum lulus." << endl;
    }
return 0;
}