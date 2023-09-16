#include <iostream>
#include <cmath>
using namespace std;
int main() {

    double a, b, c, discriminante;
    cout<<"Digite os coeficientes -> "<<endl;

    cout<<"Digite o valor de a: ";
    cin>>a;
    cout<<"Digite o valor de b: ";
    cin>>b;
    cout<<"Digite o valor de c: ";
    cin>>c;

    double raiz1 = 0, raiz2 = 0;

    discriminante =  (b * b) - 4 * a * c;

    if(discriminante > 0){
        cout<<"O polinomio tem duas raízes reais."<<endl;

        raiz1 = (-b + sqrt(discriminante)) / (2 * a);

        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        
        cout<<"Raiz 1="<<raiz1<<" e Raiz 2="<<raiz2<<endl;
    }  
    else if(discriminante = 0){
        raiz1 = (-b) / (2 * a);
        cout<<"O polinomio uma raiz real:"<<raiz1<<endl;
    }
    else
        cout<<"O polinomio não tem nenhuma raiz real."<<endl;
    
    
    double x;
    cout<<"Para resolver a sequinte questão 𝑝(𝑥) = 𝑎𝑥² + 𝑏𝑥 + 𝑐, digite o valor de x: ";
    cin>>x;
    cout<<"𝑝(𝑥) = "<<(a * (x*x) + b*x + c)<<endl;

return 0;
}