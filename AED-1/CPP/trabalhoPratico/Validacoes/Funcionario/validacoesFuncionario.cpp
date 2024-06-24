#include "../../Classes/funcionario.h"

bool Funcionario::codigoJaExisteFuncionario(int codigo) { //passagem por referencia constante, não é criada uma copia adicional de código do que será passado, apenas é lido o conteudo da variavel original, sem criar a copía(melhorando a eficiência em termos de memória e tempo);
    ifstream arquivoDeEntradaCadastroFuncionario("cadastroFuncionarioTeste.txt");
    string linha;
    set<int> codigosExistentes;

    if (arquivoDeEntradaCadastroFuncionario.is_open()) {    
        while (getline(arquivoDeEntradaCadastroFuncionario, linha)) {
            // Extraindo o codigo do funcionario (assumindo que esta na primeira linha de cada bloco de informacoes)
            stringstream ss(linha);
            int codigoExistente;
            ss >> codigoExistente; //pega a 1a
            codigosExistentes.insert(codigoExistente);

            // Ignorar as proximas quatro linhas (nome, telefone, cargo, salario)
            for (int i = 0; i < 4; ++i) {
                getline(arquivoDeEntradaCadastroFuncionario, linha);
            }
        }
        arquivoDeEntradaCadastroFuncionario.close();
    } else {
        cout << "Erro ao abrir o arquivo para leitura." << endl;
    }

    return codigosExistentes.find(codigo) != codigosExistentes.end();
}

bool Funcionario::camposNaoPreenchidosFuncionario() {
    return (codigo == 0 || nome == "" || telefone == "" || cargo == "" || salario == 0);
}
