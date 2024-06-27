#include "../Classes/estadia.h"

using namespace std;

/*
Entrada: o codigo do cliente.
Saida: A quantidade de pontos de fidelidade que ele possui
*/

int Estadia::calcularPontosFidelidade(int codigoCliente) {
    ifstream arquivoEstadia("cadastroEstadiaTeste.txt");
    if (!arquivoEstadia.is_open()) {
        cout << "Erro ao abrir o arquivo cadastroEstadiaTeste.txt" << endl;
        return 0;
    }

    string linha;
    int pontosFidelidade = 0;

    while (getline(arquivoEstadia, linha)) {
        istringstream ss(linha);
        int codCliente, quantidadeHospedes, quantidadeDiarias;
        char separador;

        // Leitura dos campos
        if (ss >> codCliente >> separador >> quantidadeHospedes >> separador >> quantidadeDiarias) {
            if (codCliente == codigoCliente) {
                pontosFidelidade += quantidadeDiarias * 10;
            }
        }
    }

    arquivoEstadia.close();
    return pontosFidelidade;
}

/*
Entrada: o codigo do cliente.
Saida: A quantidade de pontos de fidelidade que ele possui
*/

int Estadia::calculaPontos() {
    int codigoCliente;

    cout << "Digite o codigo do cliente: ";
    cin >> codigoCliente;

    int pontos = calcularPontosFidelidade(codigoCliente);
    cout << "O cliente com codigo " << codigoCliente << " possui " << pontos << " pontos de fidelidade." << endl;

    return 0;
}
