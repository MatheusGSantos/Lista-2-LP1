#include "ControleDeGastos.h"



ControleDeGastos::ControleDeGastos()
{
	index = 0;
	for (int i = 0; i < 100; i++)
	{
		despesas[i].setValor(0);
	}
}

void ControleDeGastos::setDespesas(double v, std::string tdg)
{
	despesas[index].setValor(v);
	despesas[index].setTipoDeGasto(tdg);
	index++;
}

int ControleDeGastos::CalculaTotalDespesas() 
{
	int counter = 0;
	for (Despesa i : despesas) {
		if (i.getValor() != 0) {
			counter++;
		}
	}
	return counter;
}

bool ControleDeGastos::existeDespesaDoTipo(std::string tdg)
{
	for (Despesa i: despesas)
	{
		if (i.getTipoDeGasto() == tdg)
		{
			return true;
		}
	}
	return false;
}

ControleDeGastos::~ControleDeGastos()
{
}
