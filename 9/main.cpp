#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main()
{
       Conta *con = new ContaEspecial(2000,987,"Josefina",40028922);
       try {
           con->sacar(4000);
           ( (ContaEspecial*)con )->metodoExclusivo();
       }
       catch (SaldoIndisponivelException &e) {
            cout << "Exception Capturada: " << e.what() << endl;
       }
       cout<<con->toString();

    return 0;
}
