#include "Despesa.h"

Despesa::Despesa()
{
}

void Despesa::setValor(double valor) {
	this->valor = valor;
}

void Despesa::setTipoDeGasto(std::string tipoDeGasto) {
	this->tipoDeGasto = tipoDeGasto;
}

double Despesa::getValor() {
	return this->valor;
}

std::string Despesa::getTipoDeGasto() {
	return this->tipoDeGasto;
}

Despesa::~Despesa()
{
}