#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int op;
	float numero, resultado;

	cout << "Opcion 1 = Seno" << endl << "Opcion 2 = Coseno" << endl << "Opcion 3 = Logaritmo natural" << endl << "opcion 0= salir" << endl;
	cout << "Introduce la opcion:" << "\t";
	cin >> op;

	while (op != 0)
	{
		switch (op)
		{

		case 1:
			system("cls");
			cout << "introduce el numero" << "\t";
			cin >> numero;
			resultado = sin(numero);
			cout << resultado;
			break;
		case 2:
			system("cls");
			cout << "introduce el numero" << "\t";
			cin >> numero;
			resultado = cos(numero);
			cout << resultado;
			break;
		case 3:
			system("cls");
			cout << "introduce el numero" << "\t";
			cin >> numero;
			resultado = log10(numero);
			cout << resultado;
			break;

		default:
			cout << "No es una opcion correcta";
			break;
		}

		cout <<endl<<"Introduce la opcion:" << "\t";
		cin >> op;
	}
    return 0;
}
