#include "../definicaoDeClasses.h"
#include <iostream>
#include <fstream>

int Cliente::cadastroCliente() {

    ofstream arquivoDeSaidaCadastroCliente;

    arquivoDeSaidaCadastroCliente.open("cadastroClienteTeste.txt", ios::app);

    if(arquivoDeSaidaCadastroCliente){
        cout << "Digite o codigo do cliente: ";
        cin >> codigo;
        cin.ignore();
        cout << "Digite o nome do cliente: ";
        getline(cin, nome);
        cout << "Digite o endereco do cliente: ";
        getline(cin, endereco);
        cout << "Digite o celular do cliente: ";
        getline(cin, celular);

        arquivoDeSaidaCadastroCliente << codigo << "\n";
        arquivoDeSaidaCadastroCliente << nome << "\n";
        arquivoDeSaidaCadastroCliente << endereco << "\n";
        arquivoDeSaidaCadastroCliente << celular << "\n";

        arquivoDeSaidaCadastroCliente.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroCliente.txt";
    }

    return 0;
}