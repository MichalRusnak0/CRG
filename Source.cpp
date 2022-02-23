#include <iostream>
using namespace std;

double scitanie(double c1, double c2) {
    return c1 + c2;
}
double odcitanie(double c1, double c2) {
    return c1 - c2;
}
double delenie(double c1, double c2) {
    return c1 / c2;
}
double nasobenie(double c1, double c2) {
    return c1 * c2;
}

int main()
{
start:
    int operacia;
    double c1, c2;
    cout << "Zadaj cislo 1: ";
        cin >> c1;
    cout << "Zadaj cislo 2: ";
        cin >> c2;

    cout << "Vyber operaciu \n 1- scitanie\n 2- odcitanie\n 3- nasobenie\n 4- delenie\n ==> ";

        cin >> operacia;

    if (operacia == 1) {
        double vysledok = scitanie(c1, c2);
        cout << "Vysledok: " << vysledok << endl;
    }
    if (operacia == 2) {
        double vysledok = odcitanie(c1, c2);
        cout << "Vysledok: " << vysledok << endl;
    }
    if (operacia == 3) {
        double vysledok = nasobenie(c1, c2);
        cout << "Vysledok: " << vysledok << endl;
    }
    if (operacia == 4) {
        if (c2 == 0) {
            cout << "0 sa delit neda, skus znova." << endl;
            goto start;
        }
        double vysledok = delenie(c1, c2);
        cout << "Vysledok: " << vysledok << endl;
    }
    if (operacia > 4 || operacia < 1) {
        cout << "Chybna operacia" << endl;
        goto start;
    }

    cout << "Dalsi priklad? (1- ano; 0- nie): ";
    int volba;
    cin >> volba;
    if (volba == 1) {
        goto start;
    }
    else {
        return 0;
    }
}