#include <iostream>
#include "ControleDeGastos.h"

int main() {
	ControleDeGastos c;

	c.setDespesas(42, "Luz");
	c.setDespesas(78, "Agua");
	c.setDespesas(50, "Internet");

	std::cout << "Existem " << c.CalculaTotalDespesas() << " despesas." << std::endl;

	return 0;
}