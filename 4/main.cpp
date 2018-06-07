#include <iostream>
#include <string>

using namespace std;

class FiguraGeometrica
{
public:
	double area;
	double virtual getArea() = 0;
};


class Triangulo:public FiguraGeometrica
{
public:
	Triangulo(double area){
		this->area = area;
	}
	double getArea() {
		return area;
	}

	~Triangulo(){}
};


class Circulo : public FiguraGeometrica
{
public:
	Circulo(double area){
		this->area = area;
	}
	double getArea() {
		return area;
	}

	~Circulo(){}
};

class Quadrado:public FiguraGeometrica
{
public:
	Quadrado(double area)
	{
		this->area = area;
	}
	double getArea() {
		return area;
	}
	~Quadrado(){}
};


int main()
{
	Circulo c = Circulo(27.6);
	Quadrado q = Quadrado(22.6);
	Triangulo t = Triangulo(89.7);

	std::cout << "Area do circulo " << c.getArea() << " cm2." << std::endl;
	std::cout << "Area do quadrado " << q.getArea() << " cm2." << std::endl;
	std::cout << "Area do triangulo " << t.getArea() << " cm2." << std::endl;
	
	return 0;
}