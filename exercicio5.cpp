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

    unsigned char informacaoGenetica;

    // Passo A: Ler a informação genética da planta
    std::cout << "Informe a informação genética da planta (um valor entre 0 e 255): ";
    std::cin >> informacaoGenetica;

    // Passo B: Contar quantos genes estão presentes usando operadores bit a bit
    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        if (informacaoGenetica & (1 << i)) {
            genesPresentes++;
        }
    }

    std::cout << "Número de genes presentes nesta planta: " << genesPresentes << std::endl;

    // Passo C: Solicitar ao usuário um número de gene específico
    int geneEspecifico;
    std::cout << "Informe o número de gene que você deseja verificar (entre 1 e 8): ";
    std::cin >> geneEspecifico;

    // Verificar se o gene específico está presente
    if (geneEspecifico >= 1 && geneEspecifico <= 8) {
        bool presente = informacaoGenetica & (1 << (geneEspecifico - 1));
        if (presente) {
            std::cout << "O gene " << geneEspecifico << " está presente nesta planta." << std::endl;
        } else {
            std::cout << "O gene " << geneEspecifico << " não está presente nesta planta." << std::endl;
        }
    } else {
        std::cout << "Número de gene inválido. Por favor, informe um número entre 1 e 8." << std::endl;
    }

    return 0;
}

