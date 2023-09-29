#include <iostream>
#include <cmath> // Para usar a função "abs()", que serve para calcular o valor absoluto.
#include <limits.h>
using namespace std;
int main() {
    int numero1, numero2, soma, produto, diferenca;
    float divisao;
    cout<<"Digite dois numeros -> "<<endl;

    cout<<"Numero 1: ";
    cin>>numero1;
    cout<<"Numero 2: ";
    cin>>numero2;
    cout<<"----------------------------------"<<endl<<endl;

    soma = numero1 + numero2;
    cout<<"A soma dos números em hexadecimal: "<< hex <<soma<<endl<<endl;

    produto = numero1 * numero2;
    cout<<"O produto dos números em octal: "<< oct <<produto<<endl<<endl;

    diferenca =  numero1 - numero2;
    if(diferenca<0)
        diferenca = diferenca*(-1);
    cout<<"A diferença entre os números: "<< dec <<diferenca<<endl<<endl;

    /*f. Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
    na sua biblioteca padrão para obter este tipo de resposta de forma direta;*/
    diferenca =  abs(numero1 - numero2);
    cout<<"f) A diferença entre os números: "<< dec <<diferenca<<endl<<endl;
    if (numero2==0)
        cout<<"Não será possivel dividir um número por 0."<<endl<<endl;
    else{
        divisao = float(numero1)/float(numero2);

        if(numero1%numero2==0){
            cout<<"A divisão exata é entre o número1 com o numero2 é: "<<divisao<<endl<<endl;
        }
        else
            cout<<"A divisão entre o número1 com o numero2 é: "<<divisao<<endl<<endl;
    }
    /*Escreva um programa que:
    a. Peça ao usuário para fornecer um número inteiro, obtenha-o da entrada padrão,
    usando cin, e armazene numa variável de tipo int;
    b. Determine se o valor fornecido pode ser representado, sem perda de
    informação, como um short int. Imprima na tela o valor
    fornecido, seguido das palavras “e maior que um short int”
    ou “este valor pertence ao intervalo dos short int”. Use apenas o operador condicional (?).*/    
    int numero;
    string mensagem="";
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    mensagem = (numero <= SHRT_MAX && numero >= SHRT_MIN) ?  "um short int." : "maior que um short int.";

    cout << "O número é: "<<numero<< " é "<<mensagem<<endl;
    cout<<"SHRT_MAX: "<<SHRT_MAX<<endl;
    cout<<"SHRT_MIN: "<<SHRT_MIN<<endl;

  //--------------------------PARTE DE LEANDRO-------------------------

//a.
    int a, b, c;

//b.
    std::cout << "b." << std:: endl;
    std::cout << "insira um número inteiro: " << std:: endl;
    cin >> a;
    std::cout << "Agora insira outro número inteiro: " << std:: endl;
    cin >> b;
    cout << endl;

//c.
    std::cout << "c." << std:: endl;
    c = a + b;
    cout << hex << static_cast<int>(c) << endl;
    cout << endl;

//d.
    std::cout << "d." << std:: endl;
    c = a * b;
    cout << oct << static_cast<int>(c) << endl;
    cout << endl;

//e.
    std::cout << "e." << std:: endl;
    c = abs(a - b);
    cout << c << endl;
    cout << endl;

//f.
    std::cout << "f." << std:: endl;
    //Sim, existe. Com a biblioteca <math.h>

//g.
    std::cout << "g." << std:: endl;
    if(b == 0){
        std:: cout << "A divisão não é possível." << std:: endl;
    } else {
        c = a / b;
    }
//h.
    std::cout << "h." << std:: endl;
    if(a%b == 0){
        std:: cout << "A é divisível de forma exata por B." << std:: endl;
        std:: cout << c << std:: endl;
    }

    return 0;
}