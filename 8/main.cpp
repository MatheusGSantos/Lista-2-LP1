#include <iostream>
#include <string>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

int main(void){
    Trabalhador *t1 = new Trabalhador("Pedro", 10340);
    TrabalhadorPorHora *th = new TrabalhadorPorHora("Paulo");
    TrabalhadorAssalariado *ta = new TrabalhadorAssalariado("Patrick", 10000);

    std::cout << "Salario semanal Trabalhador: " << t1->calcularSalario(100) << '\n';
    std::cout << "Salario semanal Trabalhador Por Hora: " << th->calcularSalario(150) << '\n';
    std::cout << "Salario semanal Trabalhador Assalariado: " << ta->calcularSalario(100) << '\n';

    return 0;
}