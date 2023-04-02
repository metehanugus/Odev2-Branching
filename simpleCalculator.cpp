#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Islem yapmak istediginiz iki sayiyi girin: ";
    cin >> num1 >> num2;

    cout << "Hangi islemi yapmak istersiniz (+, -, *, /, sin, cos, tan, sqrt): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Böyle bir islem yapilamaz! Ikinci sayi sifira esit olamaz.";
            break;

        case 's':
            cout << "sin(" << num1 << ") = " << sin(num1);
            break;

        case 'c':
            cout << "cos(" << num1 << ") = " << cos(num1);
            break;

        case 't':
            cout << "tan(" << num1 << ") = " << tan(num1);
            break;

        case 'q':
            cout << "sqrt(" << num1 << ") = " << sqrt(num1);
            break;

        default:
            cout << "Hatali islem seçtiniz!";
            break;
    }

    return 0;
}
