#include "../../Classes/cliente.h"

bool Cliente::codigoJaExisteCliente(int codigo) { //passagem por referencia constante, não é criada uma copia adicional de código do que será passado, apenas é lido o conteudo da variavel original, sem criar a copía(melhorando a eficiência em termos de memória e tempo);
    ifstream arquivoDeEntradaCadastroCliente("cadastroClienteTeste.txt");
    string linha;
    set<int> codigosExistentes;

    if (arquivoDeEntradaCadastroCliente.is_open()) {    
        while (getline(arquivoDeEntradaCadastroCliente, linha)) {
            // Extraindo o codigo do cliente (assumindo que esta na primeira linha de cada bloco de informacoes)
            stringstream ss(linha);
            int codigoExistente;
            ss >> codigoExistente; //pega a 1a
            codigosExistentes.insert(codigoExistente);

            // Ignora as proximas tres linhas (nome, endereco, celular)
            for (int i = 0; i < 3; ++i) {
                getline(arquivoDeEntradaCadastroCliente, linha); //pula as 3
            }
        }
        arquivoDeEntradaCadastroCliente.close();
    } else {
        cout << "Erro ao abrir o arquivo para leitura." << endl;
    }

    return codigosExistentes.find(codigo) != codigosExistentes.end();
}

bool Cliente::camposNaoPreenchidosCliente() {
    return (codigo == 0 || nome == "" || endereco == "" || celular == "");
}