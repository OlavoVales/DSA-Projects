#include "../Classes/quarto.h"

/*
Entrada: codigo do quarto, quantidade de hospedes, valor da diaria, status do quarto
Saida: quarto cadastrado
*/

int Quarto::cadastroQuarto() {

    ofstream arquivoQuarto;

    cout << "Digite o codigo do quarto: ";
    cin >> quarto;
    cin.ignore();

    cout << "Digite a quantidade de hospedes: ";
    cin >> hospedes;
    cin.ignore();

    cout << "Digite o valor da Diaria: ";
    cin >> valorDiaria;
    cin.ignore();

    cout << "Digite o status do quarto: ";
    getline(cin, status);

    arquivoQuarto.open("cadastroQuartoTeste.txt", ios::app);

    if(arquivoQuarto){

        arquivoQuarto << quarto << "," << "\n";
        arquivoQuarto << hospedes << "," << "\n";
        arquivoQuarto << valorDiaria << "," << "\n";
        arquivoQuarto << status << ","<< "\n";

        cout << "Cadastro realizado com sucesso em cadastroQuartoTeste.txt" << endl;

        arquivoQuarto.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroQuartoTeste.txt";
    }

    return 0;
}
