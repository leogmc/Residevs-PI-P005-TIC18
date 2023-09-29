#include <iostream>
using namespace std;
//Transforma o unsigned char em string de binarios e retorna quantos bitsPresentes
string ucharToBinaryStr(unsigned char value, int &bitsPresentes) {
    string str="";
    bitsPresentes = 0;
    for (int i = 7; i >= 0; i--) {
        if (value & (1 << i)) {
            str+="1";
            bitsPresentes++;
        } else {
            str+="0";
        }
    }
    return str;
}
int main() {

    unsigned char geneDaPlanta;

    /*a. Leia a informação genética de uma planta na forma de um caractere sem sinal (unsigned char);*/
    cout<<"Digite a informação genética da planta (0 a 255): ";
    scanf("%hhu", &value);
    int bitsPresente = 0;
    /*b. Utilizando os operadores bit a bit identifique quantos, dos genes estudados, estão presentes;*/
    string bitsStr = ucharToBinaryStr(geneDaPlanta, bitsPresente);
    cout<<"Número de genes presentes: "<<bitsPresente<<endl<<endl;

    /*c. Solicite do usuário a informação sobre qual gene específico ele que
    informação (um valor inteiro entre 1 e 8) e retorne se este gene se encontra nesta planta.*/
    int geneVerificar = 1 ;
    cout<<"Informe o número do gene que você deseja verificar (1 a 8): ";
    cin>>geneVerificar;

    if (geneVerificar < 1 || geneVerificar > 8) 
        cout<<"O numero deve estar no intervalo de 1 a 8. Tente novamente.";
    else {
        //Tenho que diminuir 1 do valor digitadp porque o substring vai ser de 0 a 7
        geneVerificar--;
        if (bitsStr.substr(geneVerificar, 1) == "1") 
            cout<<"O gene "<<geneVerificar<<" está presente nesta planta."<<endl;
        else
            cout<<"O gene "<<geneVerificar<<" não está presente nesta planta."<<endl;
    }

return 0;
}

