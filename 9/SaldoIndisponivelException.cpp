#include "SaldoIndisponivelException.h"
#include <string>

using namespace std;

SaldoIndisponivelException::SaldoIndisponivelException(double saldo, double valor, double limite)
{
    msg = "saldo disponivel: " + to_string(saldo + limite) + ". insuficiente para sacar " + to_string(valor);
}

SaldoIndisponivelException::~SaldoIndisponivelException()
{
    //dtor
}

const char* SaldoIndisponivelException::what(){
        return msg.c_str();
}
