#include <iostream>
#include <string>

using namespace std;

class Data
{
public:
	Data(int d,	int m, int a)
	{
		if (a < 0) {
			cout << "ano negativo, corrigido para 0\n";
			ano = 0;
		}
		else
		{
			ano = a;
		}
		if (m < 1) {
			cout << "mes menor que 1, corrigido para 1\n";
			mes = 1;
		}
		else if (m > 13)
		{
			cout << "mes maior que 13, corrigido para 12\n";
			mes = 12;
		}
		else
		{
			mes = m;
		}
		//tratamento do dia limitando apenas os dias menores e maiores que valores máximos, sem considerar anos bissextos ou meses
		if (d < 1) {
			cout << "dia menor que 1, corrigido para 1\n";
			dia = 1;
		}
		else if(d > 31)
		{
			cout << "dia maior que 31, corrigido para 31\n";
			dia = 31;
		}
		else
		{
			dia = d;
		}
	}
	~Data(){}

	int getDia()
	{
		return this->dia;
	}
	int getMes()
	{
		return this->mes;
	}
	int getAno()
	{
		return this->ano;
	}

	void setDia(int dia)
	{
		this->dia = dia;
	}
	void setMes(int dia)
	{
		this->mes = mes;
	}
	void setAno(int ano)
	{
		this->ano = ano;
	}

	int ano;
	int mes;
	int dia;

	string toString()
	{
		return to_string(dia)+"/"+to_string(mes)+"/"+to_string(ano);
	}

	//tratamento da data limitando apenas o valor máximo, sem considerar anos bissextos ou meses com quantidade de dias diferentes
	void avancarDia()
	{
		if (dia == 31) {
			dia = 1;
			if (mes == 12)
			{
				mes = 1;
				ano++;
			}
			else
			{
				mes++;
			}

		}
		else
		{
			dia++;
		}

	}

};

int main()
{
	Data d1 = Data(2, 4, 1998);
	Data d2 = Data(23, 5, 2009);


	std::cout << "Data1: " << d1.toString() << std::endl;
	std::cout << "Data2: " << d2.toString() << std::endl;
	d1.avancarDia();
	d2.avancarDia();
	std::cout << "Data1 apos avanco de 1 dia: " << d1.toString() << std::endl;
	std::cout << "Data2 apos avanco de 1 dia: " << d2.toString() << std::endl;

	return 0;
}