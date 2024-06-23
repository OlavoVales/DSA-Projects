#include <iostream>
#include <fstream>

using namespace std;

int main(){

    fstream fout;
    int x = 123456;
    //string HAROU = "atumalaca";

    fout.open("arquivoTeste.dat", ios::out | ios::binary); //pode nomear o arquivo da forma que quiser, mas tradicionalmente, .dat indica um arquivo binário
    // ios::out -> porque vai abrir o arquivo pra ESCRITA // ios::binary -> porque o arquivo vai ser aberto em modo binário
    if (fout){
        //fout.write(reinterpret_cast<char*>(&HAROU), sizeof(string));
        fout.write(reinterpret_cast<char*>(&x), sizeof(int));
        fout.close();
    } else {
        cout << "erro ao abrir o arquivo. \n";
    }

    fout.open("arquivoTeste.dat", ios::in | ios::binary); //ios::in -> porque vai abrir o arquivo pra LEITURA
    if (fout){
        //string QUESTION = "charada";
        int y = 1111111; //criada só pra validar que o teste está funcionando corretamente, poderia estar usando a variavel x
        //fout.read(reinterpret_cast<char*>(&QUESTION), sizeof(string));
        fout.read(reinterpret_cast<char*>(&y), sizeof(int));
        fout.close();
        //cout << QUESTION << endl;
        cout << y << endl; //vai imprimir o valor da variavel armazenada no arquivo a partir das funções de fstream
    } else {
        cout << "erro ao abrir o arquivo. \n";
    }

    return 0;
}