#include "TrabalhadorAssalariado.h"


TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, double salario) : Trabalhador(nome, salario){}

double TrabalhadorAssalariado::calcularSalario(int horas){
    return salario/4;
}