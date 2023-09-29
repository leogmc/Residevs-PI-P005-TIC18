#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a, b, c;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> a;

    cout << "Digite segundo numero inteiro: ";
    cin >> b;

    c = a + b;
    cout << "Hexadecimal: " << hex << c << endl;

    c = a * b;
    cout << "Octal: " << oct << c << endl;

    c = a - b;
    cout << "Valor absoluto: " << abs(c) << endl;

    if (b == 0)
    {
        cout << "Não é possível realizar divisão por zero.";
    }
    else {
        c = a / b;
        cout << "Quociente: " << c << endl;

        if (a % b == 0)
        {
            cout << "Divisão exata.";
        }
        else {
            cout << "A divisão retornou resto igual a " << a % b;
        }
    }

    cout << endl;
    return 0; 
}