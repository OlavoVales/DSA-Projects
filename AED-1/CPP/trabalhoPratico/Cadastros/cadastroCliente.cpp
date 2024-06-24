#include "../Validacoes/Cliente/validacoesCliente.cpp"

int Cliente::cadastroCliente() {

    ofstream arquivoDeSaidaCadastroCliente;

    cout << "Digite o codigo do cliente: ";
    cin >> codigo;

    cin.ignore();

    if(codigoJaExisteCliente(codigo)){
        cout << "O codigo do cliente ja existe. Cadastro não realizado.";
        return 1;
    }

    cout << "Digite o nome do cliente: ";
    getline(cin, nome);
    cout << "Digite o endereco do cliente: ";
    getline(cin, endereco);
    cout << "Digite o celular do cliente: ";
    getline(cin, celular);

    if (camposNaoPreenchidosCliente()) {
        cout << "Algum campo nao estava preenchido.";
        return 1;
    }

    arquivoDeSaidaCadastroCliente.open("cadastroClienteTeste.txt", ios::app);

    if(arquivoDeSaidaCadastroCliente){

        arquivoDeSaidaCadastroCliente << codigo << "," << "\n";
        arquivoDeSaidaCadastroCliente << nome << "," << "\n";
        arquivoDeSaidaCadastroCliente << endereco << "," << "\n";
        arquivoDeSaidaCadastroCliente << celular << ","<< "\n";

        cout << "Cadastro realizado com sucesso em cadastroCliente.txt";

        arquivoDeSaidaCadastroCliente.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroCliente.txt";
    }

    return 0;
}