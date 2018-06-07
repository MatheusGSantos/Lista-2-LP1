#include <iostream>
#include <string>

using namespace std;

class Medico
{
public:
	Medico(string n, double a, double p){
		nome = n;
		altura = a;
		peso = p;
	}
	~Medico(){}
	void virtual realizaCirurgia() = 0;

private:
	string nome;
	double altura;
	double peso;
};

class Cirurgiao :public Medico
{
public:
	Cirurgiao(string NomeEspecificacao, string n, double a, double p):Medico(n,a,p)
	{
		this->NomeEspecificacao = NomeEspecificacao;
	}
	~Cirurgiao(){}
	void realizaCirurgia()
	{
		cout << "Cirurgia em geral.\n";
	}
private:
	string NomeEspecificacao;
};


class Oftalmologista : public Medico
{
public:
	Oftalmologista(string NomeEspecificacao, string n, double a, double p) :Medico(n, a, p)
	{
		this->NomeEspecificacao = NomeEspecificacao;
	}
	void realizaCirurgia()
	{
		cout << "Cirurgia ocular.\n";
	}

	~Oftalmologista() {}
private:
	string NomeEspecificacao;
};

class Otorrino :public Medico
{
public:
	Otorrino(string NomeEspecificacao, string n, double a, double p) :Medico(n, a, p)
	{
		this->NomeEspecificacao = NomeEspecificacao;
	}
	void realizaCirurgia()
	{
		cout << "Cirurgia auditiva.\n";
	}

	~Otorrino() {}
private:
	string NomeEspecificacao;
};

class Genicologista :public Medico
{
public:
	Genicologista(string NomeEspecificacao, string n, double a, double p) :Medico(n, a, p)
	{
		this->NomeEspecificacao = NomeEspecificacao;
	}

	void realizaCirurgia()
	{
		cout << "Cirurgia genital.\n";
	}

	~Genicologista() {}
private:
	string NomeEspecificacao;
};


int main()
{
	Cirurgiao c = Cirurgiao("ESP", "Carlos", 1.80, 79);
	Oftalmologista of = Oftalmologista("ESD", "Carmem", 1.70, 69);
	Genicologista f = Genicologista("AGC", "Julia", 1.68, 72);
	Otorrino ot = Otorrino("OOP", "Pedro", 1.83, 74);
	
	c.realizaCirurgia();
	of.realizaCirurgia();
	f.realizaCirurgia();
	ot.realizaCirurgia();

	return 0;
}