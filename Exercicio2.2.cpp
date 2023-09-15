#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main(void) {
    int num;
    short int aux;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num;

    aux = num;
    
    cout << num;
    string resp = num > numeric_limits<short int>::max() ? " é maior que um short int." : num > numeric_limits<short int>::min() && num < numeric_limits<short int>::max() ? " este valor pertence ao intervalo dos short int." : " é menor que um short int.";

    cout << resp << endl;

    return 0; 
}