#include <iostream>
#include <fstream>
#include <set>//uma coleção de elementos que são armazenados de forma ordenada e não permitem duplicatas.
#include <sstream>//usada pra fazer com que o getline funciona, ao fazer com que a stream se comporte com um stream, assim podendo se utilizar também das funcionalidades da iostream
#include <map>

#ifndef CLIENTEH
#define CLIENTEH

using namespace std;

//

class Cliente {
public:
    int codigo;
    string nome;
    string endereco;
    string celular;
    bool codigoJaExisteCliente(int codigo);
    bool camposNaoPreenchidosCliente();
    int cadastroCliente();
    bool validacaoCliente(int codigoCliente);
}c;

#endif
