#include <iostream>
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

    return 0;
}
