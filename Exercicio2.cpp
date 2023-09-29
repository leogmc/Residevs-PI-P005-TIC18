#include <iostream>
#include <string>

using namespace std;

int main(void) {
    char ch1, ch2, ch3;

    cout << "Digite um caractere: ";
    cin >> ch1;
   
    string resp = isupper(ch1) ? "Letra maiúscula" : islower(ch1) ? "Letra minúscula" : isdigit(ch1) ? "Dígito" : "Outro caractere";

    cout << "O caractere informado é: " << resp << endl;

    cout << "***************************************** \n";
    ch2 = 'Q';
    cout << "Caractere: " << ch2 << endl;
    cout << "Decimal: " << dec << int(ch2) << endl;
    cout << "Octal: " << oct << int(ch2) << endl;
    cout << "Hexadecimal: " << hex << int(ch2) << endl;

    cout << "***************************************** \n";
    ch3 = int(ch2) + 32;
    cout << "Caractere: " << ch3 << endl;
    cout << "Decimal: " << dec << int(ch3) << endl;
    cout << "Octal: " << oct << int(ch3) << endl;
    cout << "Hexadecimal: " << hex << int(ch3) << endl;

    return 0; 
}