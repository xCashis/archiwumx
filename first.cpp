//
// Created by Mateusz on 2015-06-22.
//

#include <iostream>

using namespace std;

int main() {
    int input_var = 0;
    do {
        cout << "Wprowad� liczb� (-1 = wyj�cie): ";
        if (!(cin >> input_var)) {
            cout << "Wprowadzi�e� znak, kt�ry nie jest liczb�!!! Odchodz�!..";
            break;
        }
        if (input_var != -1) {
            cout << "Wprowadzi�e� " << input_var << ednl;
        }
    } while (input_var != -1);
    cout << "Wykonano." << endl;
    return 0;
}
