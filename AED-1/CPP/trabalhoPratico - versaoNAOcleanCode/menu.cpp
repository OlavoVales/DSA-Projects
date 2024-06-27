#include <iostream>
#include "./Cadastros/cadastrosGerais.cpp"

void exibirMenu() {
    std::cout << "==== Menu de Opcoes ====\n";
    std::cout << "1. Cadastrar Cliente\n";
    std::cout << "2. Cadastrar Funcionario\n";
    std::cout << "3. Cadastrar Estadia\n";
    std::cout << "4. Cadastrar Quarto\n";
    std::cout << "5. Pesquisar Usuario\n";
    std::cout << "6. Mostrar Dados dos Clientes ou Funcionario\n";
    std::cout << "7. Calcular Pontos\n";
    std::cout << "8. Sair\n";
    std::cout << "========================\n";
    std::cout << "Selecione uma opcao: ";
}

int menu() {
    int opcao = 0;
    Cliente objCliente;
    Funcionario objFuncionario;
    Estadia objEstadia;
    Quarto objQuarto;

    do {
        exibirMenu();
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                objCliente.cadastroCliente();
                break;
            case 2:
                objFuncionario.cadastroFuncionario();
                break;
            case 3:
                objEstadia.cadastroEstadia();
                break;
            case 4:
                objQuarto.cadastroQuarto();
                break;
            case 5:
                pesquisaUser();
                break;
            case 6:
                objEstadia.DadosClientes();
                break;
            case 7:
                objEstadia.calculaPontos();
            case 8:
                std::cout << "Saindo da aplicacao...\n";
                break;
            default:
                std::cout << "Op��o invalida! Tente novamente.\n";
        }

    } while (opcao != 8);

    return 0;
}
