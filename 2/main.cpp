#include <iostream>
#include <string>

using namespace std;

class Pagamento
{
public:
	
	Pagamento(){}
	~Pagamento(){}

	double getValorPagamento()
	{
		return this->valorPagamento;
	}
	void setValorPagamento(double v)
	{
		this->valorPagamento = v;
	}
	string getNomeDoFuncionario()
	{
		return this->nomeDoFuncionario;
	}
	void setNomeDoFuncionario(string n)
	{
		this->nomeDoFuncionario = n;
	}
private:
	double valorPagamento;
	string nomeDoFuncionario;
};


class ControleDePagamentos
{
public:
	ControleDePagamentos()
	{
		index = 0;
		for (int i = 0; i < 100; i++)
		{
			pagamentos[i].setValorPagamento(0);
		}
	}
	~ControleDePagamentos(){}

	void setPagamentos(double v, string n)
	{
		pagamentos[index].setValorPagamento(v);
		pagamentos[index].setNomeDoFuncionario(n);
		index++;
	}
	int calculaTotalDePagamentos()
	{
		int counter = 0;
		for (Pagamento i : pagamentos) {
			if (i.getValorPagamento() != 0) {
				counter++;
			}
		}
		return counter;
	}

	bool existePagamentoParaFuncionario(string nomeFuncionario)
	{
		for (Pagamento i : pagamentos)
		{
			if (i.getNomeDoFuncionario() == nomeFuncionario)
			{
				return true;
			}
		}
		return false;
	}

private:
	Pagamento pagamentos[100];
	int index;
};


int main()
{
	ControleDePagamentos c;

	c.setPagamentos(422, "Joao");
	c.setPagamentos(800, "Caio");
	c.setPagamentos(505, "Sandro");

	std::cout << "Existem " << c.calculaTotalDePagamentos() << " pagamentos." << std::endl;

	return 0;
}