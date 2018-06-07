#include "ContaEspecial.h"
#include <iostream>
ContaEspecial::ContaEspecial(double a,double b,std::string c,int d)
:Conta(a,b,c,d)
{
    definirLimite();
    texto_exclusivo = " Ola 123 ta chuvendo\n";
}

ContaEspecial::~ContaEspecial()
{
    //dtor
}

void ContaEspecial::definirLimite(){
    limite = 3*salarioMensal;
}

void ContaEspecial::metodoExclusivo() {
    std::cout << " Exclusivo : " << texto_exclusivo << std::endl;
}
