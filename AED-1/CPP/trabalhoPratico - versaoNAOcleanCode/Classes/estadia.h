#include "../Classes/quarto.h"

#include <iostream>
#include <chrono>
#include <string>
#include <fstream>
#include <sstream>
#include <set>

#ifndef ESTADIAH
#define ESTADIAH

class Estadia {
public:
    int codigoCliente;
    int quantidadeHospedes;
    int diaEntrada;
    int mesEntrada;
    int anoEntrada;
    int diaSaida;
    int mesSaida;
    int anoSaida;
    int quantidadeDiarias;
    int codigoEstadia;
    int cadastroEstadia();
    bool ClienteNaoCadastrado(int codigo);
    bool camposNaoPreenchidosEstadia();
    bool validacoesInputEstadia();
    bool validacaoQuantidadeHospedesQuartoEstadia(int quantidadeHospedes);
    bool baixaEstadia(int quantidadeHospedes, string& status);
    void exibirEstadiasCliente(int codigoCliente);
    int DadosClientes();
    int calcularPontosFidelidade(int codigoCliente);
    int calculaPontos();
}e;

// Returns number of days since civil 1970-01-01.  Negative values indicate
//    days prior to 1970-01-01.
// Preconditions:  y-m-d represents a date in the civil (Gregorian) calendar
//                 m is in [1, 12]
//                 d is in [1, last_day_of_month(y, m)]
//                 y is "approximately" in
//                   [numeric_limits<Int>::min()/366, numeric_limits<Int>::max()/366]
//                 Exact range of validity is:
//                 [civil_from_days(numeric_limits<Int>::min()),
//                  civil_from_days(numeric_limits<Int>::max()-719468)]
template <class Int>
constexpr
Int
days_from_civil(Int y, unsigned m, unsigned d) noexcept
{
    static_assert(std::numeric_limits<unsigned>::digits >= 18,
             "This algorithm has not been ported to a 16 bit unsigned integer");
    static_assert(std::numeric_limits<Int>::digits >= 20,
             "This algorithm has not been ported to a 16 bit signed integer");
    y -= m <= 2;
    const Int era = (y >= 0 ? y : y-399) / 400;
    const unsigned yoe = static_cast<unsigned>(y - era * 400);      // [0, 399]
    const unsigned doy = (153*(m + (m > 2 ? -3 : 9)) + 2)/5 + d-1;  // [0, 365]
    const unsigned doe = yoe * 365 + yoe/4 - yoe/100 + doy;         // [0, 146096]
    return era * 146097 + static_cast<Int>(doe) - 719468;
}

#endif
