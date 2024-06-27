#include "../Validacoes/validacoesEstadia.cpp"

/*
Entrada: codigo do cliente, quantidade de hospedes, dia da entrada da reserva, mes da entrada da reserva, ano da entrada da reserva, dia da saida da reserva, mes da saida da reserva e ano da saida da reserva.
Saida: o cadastro do cliente realizado.
*/

int Estadia::cadastroEstadia(){

    ofstream arquivoEstadia;

    cout << "Digite o seu codigo do cliente: ";
    cin >> codigoCliente;
    cin.ignore();

    if(ClienteNaoCadastrado(codigoCliente)){
        cout << "Nao ha nenhum cliente com este codigo. ";
        return 1;
    }

    cout << "Digite a quantidade de hospedes: ";
    cin >> quantidadeHospedes;
    cin.ignore();

    if(validacaoQuantidadeHospedesQuartoEstadia(quantidadeHospedes)){
        cout << "Nao ha nenhum quarto que tenha capacidade para suportar tal n�mero de hospedes. ";
        return 1;
    }

    baixaEstadia(quantidadeHospedes, q.status);

    cout << "Digite o dia de entrada da reserva: ";
    cin >> diaEntrada;
    cin.ignore();

    cout << "Digite o mes de entrada da reserva: ";
    cin >> mesEntrada;
    cin.ignore();

    cout << "Digite o ano de entrada da reserva: ";
    cin >> anoEntrada;
    cin.ignore();

    cout << "Digite o dia de saida da reserva: ";
    cin >> diaSaida;
    cin.ignore();

    cout << "Digite o mes de saida da reserva: ";
    cin >> mesSaida;
    cin.ignore();

    cout << "Digite o ano de saida da reserva: ";
    cin >> anoSaida;
    cin.ignore();

    if(camposNaoPreenchidosEstadia()){
        cout << "Algum campo deixou de ser preenchido. ";
        return 1;
    }

    if(validacoesInputEstadia()){
        cout << "A data de entrada informada deve ser posterior a data de saida. ";
        return 1;
    }

    quantidadeDiarias = days_from_civil(anoSaida, mesSaida, diaSaida) - days_from_civil(anoEntrada, mesEntrada, diaEntrada);

    arquivoEstadia.open("cadastroEstadiaTeste.txt", ios::app);

    if(arquivoEstadia){

        arquivoEstadia << codigoCliente << "," << "\n";
        arquivoEstadia << quantidadeHospedes << "," << "\n";
        arquivoEstadia << quantidadeDiarias << "," << "\n";

        cout << "Cadastro realizado com sucesso em cadastroEstadiaTeste.txt" << endl;

        arquivoEstadia.close();
    } else {
        cout << "Erro ao abrir o arquivo cadastroEstadiaTeste.txt";
    }

    return 0;
}
