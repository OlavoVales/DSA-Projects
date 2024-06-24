#include <iostream>
#include <ctime>

#ifndef ESTADIAH 
#define ESTADIAH

class Estadia {
public:
    int codigoEstadia;
    struct tm dataEntrada; //tem que transformar dps pra time_t(com mktime), pq s� da pra usar difftime, se for desse time
    struct tm dataSaida; //tem que transformar dps pra time_t(com mktime), pq s� da pra usar difftime, se for desse time
    int quantidadeDiarias;
    int codigoCliente;
    int numeroQuarto;
}e;

#endif