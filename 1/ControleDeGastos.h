#ifndef CONTROLE_DE_GASTOS_H
#define CONTROLE_DE_GASTOS_H
#include "Despesa.h"
#include <iostream>
#include <string>

class ControleDeGastos
{
public:
	ControleDeGastos();
	void setDespesas(double v, std::string tdg);
	int CalculaTotalDespesas();
	bool existeDespesaDoTipo(std::string tdg);
	~ControleDeGastos();
	
private:
	Despesa despesas[100];
	int index;
};

#endif
