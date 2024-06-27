#include "../Classes/cliente.h"
#include "../Classes/estadia.h"
#include "../Classes/quarto.h"

/*
Entrada: o código do usuário
Saida: a validação caso o codigo do usuario já está cadastrado, retornando true se estiver, e false se não
*/

bool Estadia::ClienteNaoCadastrado(int codigo){
    ifstream arquivoEstadiaCliente;
    arquivoEstadiaCliente.open("cadastroClienteTeste.txt");
    string linha;
    set<int> codigosExistentes;

    if (arquivoEstadiaCliente) {
        while (getline(arquivoEstadiaCliente, linha)) {
            stringstream ss(linha);
            int codigoExistente;
            ss >> codigoExistente;
            codigosExistentes.insert(codigoExistente);

            for (int i = 0; i < 3; ++i) {
                getline(arquivoEstadiaCliente, linha);
            }
        }
        arquivoEstadiaCliente.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroClienteTeste.txt para leitura." << endl;
    }

    return codigosExistentes.find(codigo) == codigosExistentes.end();
    // se nao encontrar o codigo retorna codigosExistentes.end()
    //se retornou codigosExistentes.end(), quer dizer que NAO TEM ESSE CODIGO CADASTRADO,
    // logo cumprindo a condicao true e acionando a funcao ClienteNaoCadastrado()
}

/*
Entrada: os campos que serão preenchidos pelo usuario
Saida: a validação caso os campos são validos, retornando true se não estiverem, e false se estiverem
*/

bool Estadia::camposNaoPreenchidosEstadia() {
    return (codigoCliente == 0 || quantidadeHospedes == 0 || diaEntrada == 0 || mesEntrada == 0 || anoEntrada == 0 || diaSaida == 0 || anoSaida == 0);
}

/*
Entrada: a junção dos dias de entrada da estadia e a junção dos dias de saida da estadia.
Saida: a validação caso os dias de entrada sejam após os dias de saída, retornando true caso 
seja e consequentemente executando o código na arquivo que o refere, ou retornando false, caso não seja, 
porém da mesma forma seguindo o fluxo da aplicação na parte onde é referenciado
*/

bool Estadia::validacoesInputEstadia(){
    int diasJuntadosEntrada, diasJuntadosSaida;

    diasJuntadosEntrada = diaEntrada + mesEntrada * 30 + anoEntrada * 365;
    diasJuntadosSaida = diaSaida + mesSaida * 30 + anoSaida * 365;

    if(diasJuntadosEntrada >= diasJuntadosSaida){
        return true;
    }else{
        return false;
    }
}

/*
Entrada: quantidade de hospedes
Saida: a validação caso haja ou não um quarto com a capacidade desejada para os hospedes, retornando true caso não encontre e false caso encontre
*/

bool Estadia::validacaoQuantidadeHospedesQuartoEstadia(int quantidadeHospedes) {
    ifstream arquivoEstadiaQuarto;
    arquivoEstadiaQuarto.open("cadastroQuartoTeste.txt");
    string linha;

    if (arquivoEstadiaQuarto) {
        while (getline(arquivoEstadiaQuarto, linha)) {
            try {
                int quarto = stoi(linha); // Primeira linha: codigo do quarto

                if (!getline(arquivoEstadiaQuarto, linha)) break;
                int hospedes = stoi(linha); // Segunda linha: capacidade de hospedes

                // Ignorar as proximas duas linhas
                for (int i = 0; i < 2; ++i) {
                    if (!getline(arquivoEstadiaQuarto, linha)) break;
                }

                // Verificar se a capacidade do quarto eh suficiente
                if (quantidadeHospedes <= hospedes) {
                    return false; // Encontrou um quarto com capacidade suficiente
                }

            } catch (const invalid_argument& e) {
                cout << "Erro ao converter string para numero: " << e.what() << endl;
                return true; // Retorna verdadeiro indicando que a validacao falhou
            }
        }
        arquivoEstadiaQuarto.close();
        return true; // Nao encontrou nenhum quarto com capacidade suficiente
    } else {
        cout << "Erro ao abrir o arquivo cadastroQuartoTeste.txt para leitura." << endl;
        return true; // Falhou ao abrir o arquivo, assume que a validacao falhou
    }
}

/*
Entrada: quantidade de hospedes e o status do quarto
Saida: a mudança do quarto para ocupado
*/

bool Estadia::baixaEstadia(int quantidadeHospedes, string& status) {
    ifstream arquivoMudancaEstadoQuarto;
    arquivoMudancaEstadoQuarto.open("cadastroQuartoTeste.txt");
    string linha;

    if (arquivoMudancaEstadoQuarto.is_open()) {
        while (getline(arquivoMudancaEstadoQuarto, linha)) {
            try {
                int quarto = stoi(linha); // Primeira linha: codigo do quarto

                if (!getline(arquivoMudancaEstadoQuarto, linha)) break;
                int hospedes = stoi(linha); // Segunda linha: capacidade de hospedes

                // Ignorar as proximas duas linhas (valorDiaria e status)
                for (int i = 0; i < 2; ++i) {
                    if (!getline(arquivoMudancaEstadoQuarto, linha)) break;
                }

                // Verificar se a capacidade do quarto eh igual a quantidade de hospedes
                if (hospedes == quantidadeHospedes) {
                    status = "ocupado";
                    break; // Se encontrar o quarto adequado, interrompe o loop
                    return true;
                }
            } catch (const invalid_argument& e) {
                cout << "Erro ao converter string para numero: " << e.what() << endl;
                // Lida com o erro de conversao aqui, se necessario
            }
        }
        arquivoMudancaEstadoQuarto.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroQuartoTeste.txt para mudanca de status." << endl;
        return false;
    }
}