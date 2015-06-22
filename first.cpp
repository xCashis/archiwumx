//
// Created by Mateusz on 2015-06-22.
//

#include <iostream>

using namespace std;

int main() {
    int input_var = 0;
    do {
        cout << "WprowadŸ liczbê (-1 = wyjœcie): ";
        if (!(cin >> input_var)) {
            cout << "Wprowadzi³eœ znak, który nie jest liczb¹!!! Odchodzê!..";
            break;
        }
        if (input_var != -1) {
            cout << "Wprowadzi³eœ " << input_var << ednl;
        }
    } while (input_var != -1);
    cout << "Wykonano." << endl;
    return 0;
}
