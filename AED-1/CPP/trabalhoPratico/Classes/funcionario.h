#include <iostream>
#include <fstream>
#include <set>
#include <sstream>
#include <string>

#ifndef FUNCIONARIOH
#define FUNCIONARIOH

using namespace std;

//definicação dos atributos da classe funcionario e seus métodos

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
    bool validacaoFuncionario(int codigoFuncionario);
}f;

#endif
