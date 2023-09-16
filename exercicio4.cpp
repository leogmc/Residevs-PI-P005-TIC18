#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, y, z;
    cout<<"Digite dois numeros -> "<<endl;

    cout<<"Digite o valor de x: ";
    cin>>x;
    cout<<"Digite o valor de y: ";
    cin>>y;

    z = 5 * x + 2;
    cout<<"----------------------------------"<<endl<<endl;

   if (y > z) {
        cout << "(" << x << ", " << y << ") está à esquerda da curva." <<endl;
    } else if (y < z) {
        cout << "(" << x << ", " << y << ") está à direita da curva." <<endl;
    } else {
        cout << "(" << x << ", " << y << ") está na curva." <<endl;
    }

     /*Atividade avançada: Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro de coordenadas;
     (distância euclidiana se calcula como 𝑥 , (pesquise na biblioteca padrão 2 + 𝑦2 
      como determinar a raiz quadrada de um número)*/
    z = sqrt(x * x + y * y);

    cout<<"A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: "<<z<<endl;

    /*Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela em notação científica;*/
    double produto = x * y;
    cout<<"O produto de x e y em notação científica é: "<<scientific<<produto<<endl;
    return 0;
}
