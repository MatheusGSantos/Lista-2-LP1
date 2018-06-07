#include <iostream>
#include <string.h>

using namespace std;

class Conta
{
protected:
    string nomeCliente;
    int numero;
    double saldo;

public:
    Conta(string n, int num, double saldo){
        numero = num;
        nomeCliente = n;
        this -> saldo = saldo;
    }
    void sacar(double valor);
    void depositar(double valor);

    string getNomeCliente(){ return nomeCliente; }
    void setNomeCliente(string n){nomeCliente = n;}
    int getNumero(){ return numero; }
    void setNumero(int num){numero = num;}
    double getSaldo(){ return saldo; }
    void setSaldo(double saldo){this -> saldo = saldo;}
};

class ContaCorrente:public Conta
{
protected:
    double salario;
    int limite;

public:
    ContaCorrente(double sal, int lim, string n, int num, double saldo):Conta(n, num, saldo){
        salario = sal;
        limite = lim;
    }
    double definirLimite(){
        return 2*salario;
    }

    int getLimite(){ return limite; }
    void setLimite(int lim){limite = lim;}
    double getSalario(){ return salario; }
    void setSalario(double sal){saldo = sal;}
};

class Poupanca:public Conta
{
private:
    int variacao;
    double taxaRendimento;

public:
    Poupanca(int var, double tax, string n, int num, double saldo):Conta(n, num, saldo){
        taxaRendimento = tax;
        variacao = var;
    }
    double render();

    int getVariacao(){ return variacao; }
    void setVariacao(int var){variacao = var;}
    double getTaxaRendimento(){ return taxaRendimento; }
    void setTaxaRendimento(double tax){taxaRendimento = tax;}
};

class ContaEspecial:public ContaCorrente
{
private:
    double definirLimite(){
        return 4*salario;
    }

public:
    ContaEspecial(double sal, int lim, string n, int num, double saldo):ContaCorrente(sal, lim, n, num, saldo){}
};

void Conta::sacar(double valor)
{
        if(saldo < valor)
            cout << "Saldo indisponível" << endl;
        else
            saldo -= valor;
}

void Conta::depositar(double valor)
{
       saldo += valor;
}

double Poupanca::render()
{
    if(variacao == 51)
        return saldo * (taxaRendimento/100);
    else if(variacao == 1)
        return saldo * ((taxaRendimento + 0.5)/100);
}

int main()
{


    return 0;
}
