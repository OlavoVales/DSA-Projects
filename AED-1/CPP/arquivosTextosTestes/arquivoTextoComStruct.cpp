#include <iostream>
#include <fstream>

using namespace std;

class Cliente {
public:
    int codigo;
    string nome;
    string endereco;
    string celular;
};

int main (){

    Cliente c;
    ofstream arquivoDeSaidaCliente;

    cout << "digite o código do cliente: ";
    cin >> c.codigo;

    arquivoDeSaidaCliente.open("clienteTeste.txt");

    if(arquivoDeSaidaCliente){
        arquivoDeSaidaCliente << c.codigo << endl;

        arquivoDeSaidaCliente.close();
        cout << "dados gravados com sucesso em clienteTeste.txt";
    }else{
        cout << "erro ao abrir o arquivo clienteTeste.txt";
    }

}