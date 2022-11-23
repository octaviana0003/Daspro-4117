#include <iostream>

using namespace std;

int main()
{
    int x, i, n, b, k;
    k=100;
    b=0;
    for (i = 1; n <= n; i++){
        cout << "Masukkan Nilai Anda :";
        cin >> x;
        if( x == -99){
            break;
        }
        if ( k > x ) {
            k=x;
        }
        if (b < x) {
            b=x;
        }
    }
    cout << "max=" << b << endl;
    cout << "min=" << k << endl;

    return 0;
}
