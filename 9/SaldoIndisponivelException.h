#ifndef SALDOINDISPONIVELEXCEPTION_H
#define SALDOINDISPONIVELEXCEPTION_H

#include <exception>
#include <string>

class SaldoIndisponivelException: public std::exception
{
    public:
        SaldoIndisponivelException(double, double, double);
        virtual const char* what();
        virtual ~SaldoIndisponivelException() throw();
    protected:
    private:
        std::string msg;
};

#endif // SALDOINDISPONIVELEXCEPTION_H
