#include "./cadastroCliente.cpp"
#include "./cadastroFuncionario.cpp"

int cadastrosGerais() {

    Cliente objCliente;
    Funcionario objFuncionario;

    objCliente.cadastroCliente();
    objFuncionario.cadastroFuncionario();

    return 0;
}
