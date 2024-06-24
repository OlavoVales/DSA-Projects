#include <iostream>
#include <fstream>
#include <set>//uma coleção de elementos que são armazenados de forma ordenada e não permitem duplicatas.
#include <sstream>//usada pra fazer com que o getline funciona, ao fazer com que a stream se comporte com um stream, assim podendo se utilizar também das funcionalidades da iostream

#ifndef FUNCIONARIOH 
#define FUNCIONARIOH

using namespace std;

class Funcionario {
public:
    int codigo;
    string nome;
    string telefone;
    string cargo;
    int salario;
    bool codigoJaExisteFuncionario(int codigo);
    bool camposNaoPreenchidosFuncionario();
    int cadastroFuncionario();
}f;

#endif