#include "TrabalhadorPorHora.h"


TrabalhadorPorHora::TrabalhadorPorHora(std::string nome) : Trabalhador(nome){}

double TrabalhadorPorHora::calcularSalario(int horas){
    if (horas > 40){
        return (40*12.0)+((horas - 40) * (12*1.5));
    } else return (horas*12);
}