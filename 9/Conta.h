#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>
#include "SaldoIndisponivelException.h"

class Conta : public IConta
{
    public:
        Conta(double,double,std::string,int);
        virtual ~Conta();
        std::string getNome();
        double getLimite();
        double getSaldo();
        double getSalario();
        int getNumeroConta();
        void setNome(std::string);
        void setLimite(double);
        void setSaldo(double);
        void setSalario(double);
        void setNumeroConta(int);
        virtual void definirLimite();
        virtual std::string toString();
        void sacar(double);
        void depositar(double);

    protected:
        double limite, saldo, salarioMensal;
        int conta;
        std::string nome;
    private:
};

#endif // CONTA_H
