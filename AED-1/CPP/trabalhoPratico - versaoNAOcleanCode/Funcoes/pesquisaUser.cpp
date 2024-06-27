#include "../Classes/cliente.h"
#include "../Classes/funcionario.h"

bool validacaoCliente(int codigoCliente){
    ifstream arquivoCliente;
    arquivoCliente.open("cadastroClienteTeste.txt");

    if (!arquivoCliente.is_open()) {
        cout << "Erro ao abrir o arquivo de clientes." << endl;
        return false;
    }

    string linha;
    while (getline(arquivoCliente, linha)) {
        stringstream ss(linha);
        Cliente cliente;
        ss >> cliente.codigo >> cliente.nome >> cliente.endereco >> cliente.celular;

        if (cliente.codigo == codigoCliente) {
            cout << "Cliente encontrado:" << endl;
            cout << "Codigo: " << cliente.codigo << endl;
            cout << "Nome: " << cliente.nome << endl;
            cout << "Endereco: " << cliente.endereco << endl;
            cout << "Celular: " << cliente.celular << endl;
            arquivoCliente.close();
            return true;
        }
    }

    cout << "Cliente nao encontrado." << endl;
    arquivoCliente.close();
    return false;
}

bool validacaoFuncionario(int codigoFuncionario){
    ifstream arquivoFuncionario;
    arquivoFuncionario.open("cadastroFuncionarioTeste.txt");

    if (!arquivoFuncionario.is_open()) {
        cout << "Erro ao abrir o arquivo de funcionarios." << endl;
        return false;
    }

    string linha;
    while (getline(arquivoFuncionario, linha)) {
        stringstream ss(linha);
        Funcionario funcionario;
        ss >> funcionario.codigo >> funcionario.nome >> funcionario.telefone >> funcionario.cargo >> funcionario.salario;

        if (funcionario.codigo == codigoFuncionario) {
            cout << "Funcionario encontrado:" << endl;
            cout << "Codigo: " << funcionario.codigo << endl;
            cout << "Nome: " << funcionario.nome << endl;
            cout << "Telefone: " << funcionario.telefone << endl;
            cout << "Cargo: " << funcionario.cargo << endl;
            cout << "Salario: " << funcionario.salario << endl;
            arquivoFuncionario.close();
            return true;
        }
    }

    cout << "Funcionario nao encontrado." << endl;
    arquivoFuncionario.close();
    return false;
}

int pesquisaUser() {
    int classeEscolhida;
    int codigoCliente;
    int codigoFuncionario;

    cout << "Digite 1 para cliente ou 2 para funcionario: ";
    cin >> classeEscolhida;

    if (classeEscolhida == 1) {
        cout << "Digite o codigo do cliente desejado: ";
        cin >> codigoCliente;

        if (validacaoCliente(codigoCliente)) {
            // Informações do cliente já foram exibidas pela função validacaoCliente
        }

    } else if (classeEscolhida == 2) {
        cout << "Digite o codigo do funcionario desejado: ";
        cin >> codigoFuncionario;

        if (validacaoFuncionario(codigoFuncionario)) {
            // Informações do funcionário já foram exibidas pela função validacaoFuncionario
        }

    } else {
        cout << "Não foi possivel realizar a operação de busca de usuarios." << endl;
    }

    return 0;
}
