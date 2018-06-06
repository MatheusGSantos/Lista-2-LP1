#include <iostream>
#include <string>

using namespace std;

class Funcionario
{
public:
	Funcionario(){}
	~Funcionario(){}

	string getNome()
	{
		return this->nome;
	}
	int getSalario()
	{
		return this->salario;
	}
	string getMatricula()
	{
		return this->matricula;
	}



private:
	string matricula;
	string nome;
	double salario;
};


int main()
{
	/*ControleDePagamentos c;

	c.setPagamentos(422, "Joao");
	c.setPagamentos(800, "Caio");
	c.setPagamentos(505, "Sandro");

	std::cout << "Existem " << c.calculaTotalDePagamentos() << " pagamentos." << std::endl;
	*/
	return 0;
}