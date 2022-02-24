#include <iostream>
using namespace std;

int main() {
    int n;
    double fact = 1.0;

    cout << "Zadajte kladne cislo: ";
    cin >> n;

    if (n < 0)
        cout << "Chyba!! Zadali ste zaporne cislo";
    else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        cout << "Factorial cisla " << n << " = " << fact;
    }

    return 0;
}