#include <iostream>

using namespace std;

int main()
{

    //soal 1 bilangan genap antara 25-50

    int a;
        cout << "masukkan bilangan: ";
        cin >> a;

        if (a % 2 == 0 && a > 25 && a < 50) {
            cout << "1.Bilangan sesuai" << endl;
        }

    //soal 2 bilangan ganjil antara lebih dari 13 atau kurang dari 5
        if (a % 2 == 1 && (a > 13 || a < 5)) {
            cout << "2.Bilangan sesuai" << endl;
        }

    //soal 3 bilangan bulat antara 25-50 atau bilangan ganjil antara 3-15
        if ((a > 25 && a < 50) || (a % 2 == 1 && a > 3 && a < 15)) {
            cout << "3.Bilangan sesuai" << endl;
        }

    return 0;
}
