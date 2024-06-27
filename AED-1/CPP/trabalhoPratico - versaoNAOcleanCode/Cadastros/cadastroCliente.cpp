#include "../Validacoes/validacoesCliente.cpp"

/*
Entrada: codigo do cliente, nome do cliente, endereco do cliente e celular do cliente
Saida: o cadastro do cliente realizado
*/

int Cliente::cadastroCliente() {

    ofstream arquivoCliente;

    cout << "Digite o codigo do cliente: ";
    cin >> codigo;

    cin.ignore();

    if(codigoJaExisteCliente(codigo)){
        cout << "O codigo do cliente ja existe. Cadastro nao realizado.";
        return 1;
    }

    cout << "Digite o nome do cliente: ";
    getline(cin, nome);
    cout << "Digite o endereco do cliente: ";
    getline(cin, endereco);
    cout << "Digite o celular do cliente: ";
    getline(cin, celular);

    if (camposNaoPreenchidosCliente()) {
        cout << "Algum campo deixou de ser preenchido. ";
        return 1;
    }

    arquivoCliente.open("cadastroClienteTeste.txt", ios::app);

    if(arquivoCliente){

        arquivoCliente << codigo << "," << "\n";
        arquivoCliente << nome << "," << "\n";
        arquivoCliente << endereco << "," << "\n";
        arquivoCliente << celular << ","<< "\n";

        cout << "Cadastro realizado com sucesso em cadastroClienteTeste.txt" << endl;

        arquivoCliente.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroClienteTeste.txt";
    }

    return 0;
}
