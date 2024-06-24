#include "../Validacoes/Funcionario/validacoesFuncionario.cpp"

int Funcionario::cadastroFuncionario() {

    ofstream arquivoDeSaidaCadastroFuncionario;

    cout << "Digite o codigo do funcionario: ";
    cin >> codigo;

    cin.ignore();

    if(codigoJaExisteFuncionario(codigo)){
        cout << "O codigo do funcionario ja existe. Cadastro não realizado.";
        return 1;
    }

    cout << "Digite o nome do Funcionario: ";
    getline(cin, nome);
    cout << "Digite o endereco do Funcionario: ";
    getline(cin, telefone);
    cout << "Digite o celular do Funcionario: ";
    getline(cin, cargo);

    cout << "Digite o salario do funcionario: ";
    cin >> salario;

    cin.ignore();

    if (camposNaoPreenchidosFuncionario()) {
        cout << "Algum campo nao estava preenchido.";
        return 1;
    }

    arquivoDeSaidaCadastroFuncionario.open("cadastroFuncionarioTeste.txt", ios::app);

    if(arquivoDeSaidaCadastroFuncionario){

        arquivoDeSaidaCadastroFuncionario << codigo << "," << "\n";
        arquivoDeSaidaCadastroFuncionario << nome << "," << "\n";
        arquivoDeSaidaCadastroFuncionario << telefone << "," << "\n";
        arquivoDeSaidaCadastroFuncionario << cargo << ","<< "\n";
        arquivoDeSaidaCadastroFuncionario << salario << ","<< "\n";

        cout << "Cadastro realizado com sucesso em cadastroFuncionario.txt";

        arquivoDeSaidaCadastroFuncionario.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroFuncionario.txt";
    }

    return 0;
}