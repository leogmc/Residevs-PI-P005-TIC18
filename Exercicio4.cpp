#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double x, y, z;

    cout << "Informe o primeiro número de ponto flutuante: ";
    cin >> x;

    cout << "Informe o segundo número de ponto flutuante: ";
    cin >> y;

    cout << endl;

    z = 5 * x + 2;

    if (y > z)
    {
        cout << "(" << x << ", " << y << "): " << "está à esquerda da curva \n";
    }
    else if (y < z)
    {
        cout << "(" << x << ", " << y << "): " << "está à direita da curva \n";
    }
    else
    {
        cout << "(" << x << ", " << y << "): " << "está na curva \n";
    }

    cout << endl;
    
    z = sqrt(x * x + y * y);

    cout << "Distância Euclidiana ao centro das coordenadas (" << x << ", " << y << "): " << z << endl << endl;

    z = x * y;
    cout << x << " * " << y << " = " << scientific << z << endl << endl;

    return 0;
}