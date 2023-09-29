#include <iostream>
#include <cctype>

using namespace std;
int main() {
    char ch1, ch2, ch3;
    cout<<"Digite um caractere: ";
    cin >> ch1;

    bool ehMaiuscula = isupper(ch1) ? true : false;
    bool ehMinuscula = islower(ch1) ? true : false;
    bool ehDigito = isdigit(ch1) ? true : false;

    string eh = ehMaiuscula ? "uma letra maiúscula" : (ehMinuscula ? "uma letra minúscula" : (ehDigito ? "um dígito" : "outro tipo de caractere"));


    cout<<"O caractere "<<ch1<<" é "<<eh<<endl<<endl;

    /*e. Atribua à variável ch2 o caractere 81, identifique e imprima na tela,
    utilizando cout, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;*/
    ch2 = 81;

    cout<<"e)"<<endl;
    cout<<"ch2 em decimal: "<<int(ch2)<<endl;
    cout<<"ch2 em octal: "<< oct<<int(ch2)<<endl;
    cout<<"ch2 em hexadecimal: "<< hex <<int(ch2)<<endl;
    cout<<"Caractere ch2: "<<ch2<<endl;

    /*f. Dado que o caractere ch2 é uma letra maiúscula, atribua à 
    variável ch3 o caractere que corresponde à mesma letra minúscula
    e Imprima ch3 na tela, utilizando cout, em formato numérico decimal, octal, hexadecimal e como caractere;*/
    ch3 = tolower(ch2);

    cout<<"f)"<<endl;
    cout<<"ch3 em decimal: "<<int(ch3)<<endl;
    cout<<"ch3 em octal: "<< oct<<int(ch3)<<endl;
    cout<<"ch3 em hexadecimal: "<< hex <<int(ch3)<<endl;
    cout<<"Caractere ch3: "<<ch3<<endl;
  
  // ---------------------------------- PARTE DE LEANDRO ------------------------------------
  
  //a.
    char ch1, ch2, ch3;

//b.
    std::cout << "b." << std:: endl;
    std::cout << "Insira um caractere: ";
    cin >> ch1;

//c.
    std::cout << "c." << std:: endl;
    isupper(ch1) ? (cout << "É maiúsculo."):(cout << "Não é maiúsculo.");
    cout << endl;
    islower(ch1) ? (cout << "É minúsculo."):(cout << "Não é minúsculo.");
    cout << endl;
    isdigit(ch1) ? (cout << "É um digito."):(cout << "É outro tipo de caractere.");
    cout << endl;

//d.
    std::cout << "d." << std:: endl;
    //Sim, existe. Utilizando a biblioteca padrão "cctype";

//e.
    std::cout << "e." << std:: endl;
    ch2 = 81;
    // Imprimindo o valor em formato decimal
    cout << "Em decimal: " << static_cast<int>(ch2) << endl;

    // Imprimindo o valor em formato octal
    cout << "Em octal: " << oct << static_cast<int>(ch2) << endl;

    // Imprimindo o valor em formato hexadecimal
    cout << "Em hexadecimal: " << hex << static_cast<int>(ch2) << endl;

    // Imprimindo o valor como caractere
    cout << "Em formato de caractere: " << ch2 << endl;

//f.
    std::cout << "f." << std:: endl;

    if (isupper(ch2)){
        ch3 = tolower(ch2); // tolower serve para transformar um caractere maiúsculo em minúsculo.
    cout << "Em formato de caractere: " << ch3 << endl;

       // Imprimindo o valor em formato decimal
    cout << "Em decimal: " << static_cast<int>(ch3) << endl;

    // Imprimindo o valor em formato octal
    cout << "Em octal: " << oct << static_cast<int>(ch3) << endl;

    // Imprimindo o valor em formato hexadecimal
    cout << "Em hexadecimal: " << hex << static_cast<int>(ch3) << endl;

    // Imprimindo o valor como caractere
    cout << "Em formato de caractere: " << ch3 << endl;


    }

    return 0;
}


