#include "./cadastroCliente.cpp"
#include "./cadastroFuncionario.cpp"
#include "./cadastroEstadia.cpp"
#include "./cadastroQuarto.cpp"
#include "../Funcoes/pesquisaUser.cpp"
#include "../Funcoes/estadiasCliente.cpp"
#include "../Funcoes/calcularPontosFidelidade.cpp"

/*
referencia de todas as funções que compoem o menu da aplicação e suas importações
*/

int cadastrosGerais() {

    Cliente objCliente;
    Funcionario objFuncionario;
    Estadia objEstadia;
    Quarto objQuarto;

    objCliente.cadastroCliente();
    objFuncionario.cadastroFuncionario();
    objEstadia.cadastroEstadia();
    objQuarto.cadastroQuarto();
    pesquisaUser();
    objEstadia.DadosClientes();
    objEstadia.calculaPontos();
    return 0;
}
