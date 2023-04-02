#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Islem yapmak istediginiz iki sayiyi girin: ";
    cin >> num1 >> num2;

    cout << "Hangi islemi yapmak istersiniz (+, -, *, /): ";
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

        default:
            cout << "Hatali islem seçtiniz!";
            break;
    }

    return 0;
}

