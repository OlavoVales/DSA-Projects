#include "../Classes/estadia.h"

using namespace std;

/*
Entrada: codigo do cliente
Saida: A quantidade de estadias que este cliente tem, além da quantidade de horas e diarias em cada uma delas
*/

void Estadia::exibirEstadiasCliente(int codigoCliente) {
    ifstream arquivoEstadia("cadastroEstadiaTeste.txt");
    if (!arquivoEstadia.is_open()) {
        cout << "Erro ao abrir o arquivo cadastroEstadiaTeste.txt" << endl;
        return;
    }

    string linha;
    bool encontrouEstadia = false;
    while (getline(arquivoEstadia, linha)) {
        istringstream ss(linha);
        int codCliente, quantidadeHospedes, quantidadeDiarias;
        char separador;

        // Leitura dos campos
        if (ss >> codCliente >> separador >> quantidadeHospedes >> separador >> quantidadeDiarias) {
            if (codCliente == codigoCliente) {
                encontrouEstadia = true;
                cout << "Codigo Cliente: " << codCliente << "\n";
                cout << "Quantidade de Hospedes: " << quantidadeHospedes << "\n";
                cout << "Quantidade de Diarias: " << quantidadeDiarias << "\n";
                cout << "---------------------------" << endl;
            }
        }
    }

    if (!encontrouEstadia) {
        cout << "Nao foram encontradas estadias para o cliente com codigo " << codigoCliente << endl;
    }

    arquivoEstadia.close();
}

/*
Entrada: codigo do cliente
Saida: A quantidade de estadias que este cliente tem, além da quantidade de horas e diarias em cada uma delas
*/

int Estadia::DadosClientes(){
int codigoCliente;

    cout << "Digite o codigo do cliente: ";
    cin >> codigoCliente;

    exibirEstadiasCliente(codigoCliente);
    return 0;

}

