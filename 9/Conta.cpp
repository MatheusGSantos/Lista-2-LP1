#include "Conta.h"
#include <iostream>
#include "SaldoIndisponivelException.h"
#include <string>

using namespace std;

Conta::Conta(double saldo,double salarioMensal, string nome, int conta)
{
    this->nome=nome;
    this->saldo=saldo;
    this->salarioMensal=salarioMensal;
    this->conta=conta;
    definirLimite();
}

Conta::~Conta()
{
    //dtor
}

void Conta::depositar(double valor){
    saldo += valor;
}

void Conta::sacar(double valor) {
    if(valor > (saldo+limite)){
        cout<<"Valor Indisponivel"<<endl;
        throw SaldoIndisponivelException(saldo, valor, limite);
    }else{
        saldo-= valor;
    }
}

std::string Conta::getNome(){
    return nome;
}

double Conta::getLimite(){
    return limite;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getSalario(){
    return salarioMensal;
}

int Conta::getNumeroConta(){
    return conta;
}
void Conta::setNome(std::string nome){
    this->nome = nome;

}
void Conta::setLimite(double limite){
    this->limite = limite;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}
void Conta::setSalario(double salarioMensal){
    this->salarioMensal = salarioMensal;
}
void Conta::setNumeroConta(int numeroConta){
    this->conta = numeroConta;
}

void Conta::definirLimite(){
    limite=salarioMensal*2;
}

std::string Conta::toString(){
    return  "Nome: "+ nome+"\n"+
            "Numero da Conta:" + std::to_string(conta)+"\n"+
            "Salario: "+to_string(salarioMensal) +"\n"+
            "Saldo: "+to_string(saldo)+"\n"+
            "Limite:" +to_string(limite) +"\n";

}
