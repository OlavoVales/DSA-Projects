#include "../Classes/cliente.h"

/*
Entrada: o código do usuário
Saida: a validação caso o codigo do usuario já está cadastrado, retornando true se estiver, e false se não
*/

bool Cliente::codigoJaExisteCliente(int codigo) { 
    /*ifstream arquivoCliente;

    arquivoCliente.open("cadastroClienteTeste.txt");*/

    ifstream arquivoCliente("cadastroClienteTeste.txt");

    string linha;
    set<int> codigosExistentes;

    if (arquivoCliente/*.is_open()*/) {
        while (getline(arquivoCliente, linha)) {
            // Extraindo o codigo do cliente (assumindo que esta na primeira linha de cada bloco de informacoes)
            stringstream ss(linha);
            int codigoExistente;
            ss >> codigoExistente; //pega a 1a
            codigosExistentes.insert(codigoExistente);

            // Ignora as proximas tres linhas (nome, endereco, celular)
            for (int i = 0; i < 3; ++i) {
                getline(arquivoCliente, linha); //pula as 3
            }
        }
        arquivoCliente.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroClienteTeste.txt para leitura." << endl;
    }

    return codigosExistentes.find(codigo) != codigosExistentes.end();
    // se não encontrar o código retorna codigosExistentes.end()
    //se não retornou codigosExistentes.end(), quer dizer que ESSE CÓDIGO CADASTRADO ESTÁ CADASTRADO,
    // logo cumprindo a condição true e acionando a função codigoJaExisteCliente()

}

/*
Entrada: os campos que serão preenchidos pelo cliente
Saida: a validação caso os campos são validos, retornando true se não estiverem, e false se estiverem
*/

bool Cliente::camposNaoPreenchidosCliente() {
    return (codigo == 0 || nome == "" || endereco == "" || celular == "");
}
