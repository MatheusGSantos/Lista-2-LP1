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
	double getSalario()
	{
		return this->salario;
	}
	string getMatricula()
	{
		return this->matricula;
	}

	void setNome(string nome)
	{
		this->nome = nome;
	}
	void setSalario(double salario)
	{
		this->salario = salario;
	}
	void setMatricula(string matricula)
	{
		this->matricula = matricula;
	}

protected:
	string matricula;
	string nome;
	double salario;
};


class Consultor: public Funcionario
{
public:
	Consultor(){}
	~Consultor(){}
	double getSalario() 
	{
		return salario * 1.1;
	}
	double getSalario(float percentual)
	{
		return salario * (1+(percentual / 100));
	}
};


int main()
{
	Funcionario f;
	Consultor c;

	c.setSalario(8000);
	c.setMatricula("2930451");
	c.setNome("Carlos");
	f.setSalario(8000);
	f.setMatricula("1309854");
	f.setNome("Pedro");

	std::cout << "Salario do consultor eh " << c.getSalario() << " reais." << std::endl;
	std::cout << "Salario do funcionario eh " << f.getSalario() << " reais." << std::endl;
	std::cout << "Salario do consultor com 50% de aumento sobre salario base eh " << c.getSalario(50) << " reais." << std::endl;

	return 0;
}