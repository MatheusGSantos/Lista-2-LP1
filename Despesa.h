#ifndef DESPESA_H
#define DESPESA_H

#include <string>

class Despesa
{
public:
	Despesa();
	void setValor(double valor);
	void setTipoDeGasto(std::string tipoDeGasto);
	double getValor();
	std::string getTipoDeGasto();
	~Despesa();

private:
	double valor;
	std::string tipoDeGasto;
};

#endif
