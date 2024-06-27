#include "../Classes/cliente.h"
#include "../Classes/estadia.h"
#include "../Classes/quarto.h"

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
    // se n�o encontrar o c�digo retorna codigosExistentes.end()
    //se retornou codigosExistentes.end(), quer dizer que N�O TEM ESSE C�DIGO CADASTRADO,
    // logo cumprindo a condi��o true e acionando a fun��o ClienteNaoCadastrado()
}

bool Estadia::camposNaoPreenchidosEstadia() {
    return (codigoCliente == 0 || quantidadeHospedes == 0 || diaEntrada == 0 || mesEntrada == 0 || anoEntrada == 0 || diaSaida == 0 || anoSaida == 0);
}

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

bool Estadia::validacaoQuantidadeHospedesQuartoEstadia(int quantidadeHospedes) {
    ifstream arquivoEstadiaQuarto;
    arquivoEstadiaQuarto.open("cadastroQuartoTeste.txt");
    string linha;

    if (arquivoEstadiaQuarto) {
        while (getline(arquivoEstadiaQuarto, linha)) {
            try {
                int quarto = stoi(linha); // Primeira linha: c�digo do quarto

                if (!getline(arquivoEstadiaQuarto, linha)) break;
                int hospedes = stoi(linha); // Segunda linha: capacidade de hospedes

                // Ignorar as pr�ximas duas linhas
                for (int i = 0; i < 2; ++i) {
                    if (!getline(arquivoEstadiaQuarto, linha)) break;
                }

                // Verificar se a capacidade do quarto � suficiente
                if (quantidadeHospedes <= hospedes) {
                    return false; // Encontrou um quarto com capacidade suficiente
                }

            } catch (const invalid_argument& e) {
                cout << "Erro ao converter string para n�mero: " << e.what() << endl;
                return true; // Retorna verdadeiro indicando que a valida��o falhou
            }
        }
        arquivoEstadiaQuarto.close();
        return true; // Nao encontrou nenhum quarto com capacidade suficiente
    } else {
        cout << "Erro ao abrir o arquivo cadastroQuartoTeste.txt para leitura." << endl;
        return true; // Falhou ao abrir o arquivo, assume que a validacao falhou
    }
}

bool Estadia::baixaEstadia(int quantidadeHospedes, string& status) {
    ifstream arquivoMudancaEstadoQuarto;
    arquivoMudancaEstadoQuarto.open("cadastroQuartoTeste.txt");
    string linha;

    if (arquivoMudancaEstadoQuarto.is_open()) {
        while (getline(arquivoMudancaEstadoQuarto, linha)) {
            try {
                int quarto = stoi(linha); // Primeira linha: c�digo do quarto

                if (!getline(arquivoMudancaEstadoQuarto, linha)) break;
                int hospedes = stoi(linha); // Segunda linha: capacidade de hospedes

                // Ignorar as pr�ximas duas linhas (valorDiaria e status)
                for (int i = 0; i < 2; ++i) {
                    if (!getline(arquivoMudancaEstadoQuarto, linha)) break;
                }

                // Verificar se a capacidade do quarto � igual � quantidade de h�spedes
                if (hospedes == quantidadeHospedes) {
                    status = "ocupado";
                    break; // Se encontrar o quarto adequado, interrompe o loop
                    return true;
                }
            } catch (const invalid_argument& e) {
                cout << "Erro ao converter string para n�mero: " << e.what() << endl;
                // Lida com o erro de convers�o aqui, se necess�rio
            }
        }
        arquivoMudancaEstadoQuarto.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroQuartoTeste.txt para mudan�a de status." << endl;
        return false;
    }
}
