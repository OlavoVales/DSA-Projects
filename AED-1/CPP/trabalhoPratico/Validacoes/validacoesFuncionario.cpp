#include "../Classes/funcionario.h"

/*
Entrada: o código do funcionario
Saida: a validação caso o codigo do funcionario já está cadastrado, retornando true se estiver, e false se não
*/

bool Funcionario::codigoJaExisteFuncionario(int codigo) {
    ifstream arquivoFuncionario("cadastroFuncionarioTeste.txt");
    string linha;
    set<int> codigosExistentes;

    if (arquivoFuncionario) {
        while (getline(arquivoFuncionario, linha)) {
            stringstream ss(linha);
            int codigoExistente;
            ss >> codigoExistente;
            codigosExistentes.insert(codigoExistente);

            for (int i = 0; i < 4; ++i) {
                getline(arquivoFuncionario, linha);
            }
        }
        arquivoFuncionario.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroFuncionarioTeste.txt para leitura." << endl;
    }

    return codigosExistentes.find(codigo) != codigosExistentes.end();
}

/*
Entrada: os campos que serão preenchidos pelo funcionario
Saida: a validação caso os campos são validos, retornando true se não estiverem, e false se estiverem
*/

bool Funcionario::camposNaoPreenchidosFuncionario() {
    return (codigo == 0 || nome == "" || telefone == "" || cargo == "" || salario == 0);
}