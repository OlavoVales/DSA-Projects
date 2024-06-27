#include "../Classes/funcionario.h"

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

bool Funcionario::camposNaoPreenchidosFuncionario() {
    return (codigo == 0 || nome == "" || telefone == "" || cargo == "" || salario == 0);
}
