#include <iostream>
#include <fstream>
#include <set>
#include <sstream>
#include <string>

#ifndef CLIENTEH
#define CLIENTEH

using namespace std;

//definicação dos atributos da classe cliente e seus métodos

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
