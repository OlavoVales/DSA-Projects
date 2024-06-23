#include <iostream>
#include <time.h>

#ifndef DEFINICAODECLASSESH 
#define DEFINICAODECLASSESH

using namespace std;

class Cliente {
public:
    int codigo;
    string nome;
    string endereco;
    string celular;
    int cadastroCliente();
}c;

class Funcionario {
public:
    int codigo;
    string nome;
    string telefone;
    string cargo;
    int salario;
}f;

class Estadia {
public:
    int codigoEstadia;
    struct tm dataEntrada; //tem que transformar dps pra time_t(com mktime), pq s� da pra usar difftime, se for desse time
    struct tm dataSaida; //tem que transformar dps pra time_t(com mktime), pq s� da pra usar difftime, se for desse time
    int quantidadeDiarias;
    int codigoCliente;
    int numeroQuarto;
}e;


class Quarto {
public:
    int quarto;
    int hospedes;
    int valorDiaria;
    string status;
}q;

#endif