#include <iostream>
#include <string>

using namespace std;

string converteCharParaBinario(unsigned char valor, int &bits);

int main(void) {
    unsigned char genePlanta;
    int verificarGene;
    int quantidadeBits = 0;

    cout << "Informe o valor do gene da planta (0 a 255): ";
    cin >> genePlanta;
    
    string bits = converteCharParaBinario(genePlanta, quantidadeBits);
    //cout << "bits: " << bits << endl;

    cout << "Quantidade de genes presentes: " << quantidadeBits << endl;
    
    do
    {
        cout << "\nInforme sobre qual gene deseja informações (1 a 8): ";
        cin >> verificarGene;

        bool valorInvalido = verificarGene < 1 || verificarGene > 8;
        if (valorInvalido)
        {
            cout << "\nO valor deve estar entre 1 e 8.\n\n";
        }
    } while (verificarGene < 1 || verificarGene > 8);

    verificarGene--;
    if (bits.substr(verificarGene, 1) == "1")
    {
        cout << "\nGene presente na planta.\n";
    }
    else
    {
        cout << "\nGene ausente na plana.\n";
    }

    cout << endl;
    return 0;
}

string converteCharParaBinario(unsigned char valor, int &bits) {
    string s = "";
    bits = 0;

    for (int i = 7; i >= 0; i--)
    {
        //int c = valor & (1 << i);
        //cout << "valor & (1 << i): " << c << endl; 

        if (valor & (1 << i))
        {
            s += "1";
            bits++;
            //cout << "S: " << s << endl;
        }
        else
        {
            s += "0";
        }
    }

    return s;
}