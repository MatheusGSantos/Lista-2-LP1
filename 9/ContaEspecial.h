#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"
#include <string>

class ContaEspecial : public Conta
{
    public:
        ContaEspecial(double,double,std::string,int);
        virtual ~ContaEspecial();
        void definirLimite();
        void metodoExclusivo();
    protected:
    private:
        std::string texto_exclusivo;
};

#endif // CONTAESPECIAL_H
