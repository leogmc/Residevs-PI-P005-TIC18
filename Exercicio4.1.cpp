#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double px, a, b, c;
    double r1 = 0, r2 = 0;

    cout << "Informe o valor de a: ";
    cin >> a;

    cout << "Informe o valor de b: ";
    cin >> b;

    cout << "Informe o valor de c: ";
    cin >> c;

    cout << endl;

    px = pow(b, 2) - 4 * a * c;
    cout << "p(x) = " << px << endl;

    if (px == 0)
    {
        r1 = -b / (2 * a);

        cout << "Há apenas uma solução real: " << r1 << endl;
    }
    else if (px > 0)
    {
        r1 = (-b + sqrt(px)) / (2 * a);
        r2 = (-b - sqrt(px)) / (2 * a);

        cout << "Há duas soluções reais distintas: \n";
        cout << "r' = " << r1 << endl;
        cout << "r'' = " << r2 << endl;
    }
    else
    {
        cout << "Não há soluções reais. \n";
    }

    cout << endl;
    return 0;
}