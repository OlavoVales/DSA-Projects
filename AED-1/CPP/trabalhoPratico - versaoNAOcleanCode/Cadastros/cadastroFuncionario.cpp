#include "../Validacoes/validacoesFuncionario.cpp"

/*
Entrada: codigo do funcionario, nome do funcionario, endereco do funcionario, celular do funcionario e salario do funcionario.
Saida: funcionario cadastrado.
*/

int Funcionario::cadastroFuncionario() {

    ofstream arquivoFuncionario;

    cout << "Digite o codigo do funcionario: ";
    cin >> codigo;

    cin.ignore();

    if(codigoJaExisteFuncionario(codigo)){
        cout << "O codigo do funcionario ja existe. Cadastro nao realizado.";
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
        cout << "Algum campo deixou de ser preenchido. ";
        return 1;
    }

    arquivoFuncionario.open("cadastroFuncionarioTeste.txt", ios::app);

    if(arquivoFuncionario){

        arquivoFuncionario << codigo << "," << "\n";
        arquivoFuncionario << nome << "," << "\n";
        arquivoFuncionario << telefone << "," << "\n";
        arquivoFuncionario << cargo << ","<< "\n";
        arquivoFuncionario << salario << ","<< "\n";

        cout << "Cadastro realizado com sucesso em cadastroFuncionarioTeste.txt" << endl;

        arquivoFuncionario.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroFuncionarioTeste.txt";
    }

    return 0;
}
