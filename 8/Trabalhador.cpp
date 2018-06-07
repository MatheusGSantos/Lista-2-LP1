#include "Trabalhador.h"


Trabalhador::Trabalhador(std::string nome, double salario){
    this->salario = salario;
    this->nome = nome;
}
Trabalhador::Trabalhador(std::string nome){
    this->salario = salario;
}

double Trabalhador::calcularSalario(int horas){
    return salario/4;
}

void Trabalhador::setNome(std::string nome){
    this->nome = nome;
}
void Trabalhador::setSalario(double salario){
    this->salario = salario;
}
std::string Trabalhador::getNome(){
    return nome;
}
double Trabalhador::getSalario(){
    return salario;
}