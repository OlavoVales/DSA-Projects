#include <iostream>
#include <time.h>

using namespace std;

int main (){

time_t now;

class Cliente {
    int codigo;
    string nome;
    string endereco;
    string celular;
};

class Funcionario {
    int codigo;
    string nome;
    string telefone;
    string cargo;
    int salario;
};

class Estadia {
    int codigoEstadia;
    struct tm dataEntrada; //tem que transformar dps pra time_t(com mktime), pq s� da pra usar difftime, se for desse time
    struct tm dataSaida; //tem que transformar dps pra time_t(com mktime), pq s� da pra usar difftime, se for desse time
    int quantidadeDiarias;
    int codigoCliente;
    int numeroQuarto;
};


class Quarto {
    int quarto;
    int hospedes;
    int valorDiaria;
    string status;
};

//converter a data em segundos, se a data informada(transformada em numeros), for maior que a data de marca��o que a reserva, ok, pode marcar

return 0;
}
