#include <iostream>
using namespace std;
float static fact(float numero);
float static pow(float numero,float potencia);
float cos(float x, int rep);
float sen(float x, int rep);
float logn(float x, int rep);


int main()
{
    float numero=0.00, suma=0.00;
    int limite;
	/*
    cout<<"Introduce el valor de x"<<"\t";
    cin>>numero;
    cout<<"¿Cuantas veces quieres correlo?"<<"\t";
    cin>>limite;
    cout<<cos(numero,limite)*/
	cout << "Opcion 1 = Seno" << endl << "Opcion 2 = Coseno" << endl << "Opcion 3 = Logaritmo natural" << endl << "opcion 0= salir" << endl;
	cout << "Introduce la opcion:" << "\t";
	cin >> op;

	while (op != 0)
	{
		switch (op)
		{

		case 1:
			//seno
			system("cls");
			cout << "Introduce el valor de x" << "\t";
			cin >> numero;
			cout << "¿Cuantas veces quieres correlo?" << "\t";
			cin >> limite;
			cout << sen(numero, limite);
			break;
		case 2:
			//Coseno
			system("cls");
			cout << "Introduce el valor de x" << "\t";
			cin >> numero;
			cout << "¿Cuantas veces quieres correlo?" << "\t";
			cin >> limite;
			cout << cos(numero, limite);
			break;
		case 3:
			system("cls");
			cout << "Introduce el valor de x" << "\t";
			cin >> numero;
			cout << "¿Cuantas veces quieres correlo?" << "\t";
			cin >> limite;
			cout << logn(numero, limite);
			break;

		default:
			cout << "No es una opcion correcta";
			break;
		}

		cout << endl << "Introduce la opcion:" << "\t";
		cin >> op;
	}
    return 0;
}

float cos(float x, int rep){
    float res = 0.00;
    for(float i = 1.00; i <= rep; i++){
        res+=(pow(x,(2*(i-1))) / fact(2*(i-1))) * pow(-1,i+1)
    }
    return res;
}
float sen(float x, int rep){
    float res = 0.00;
    for(float i = 1.00; i <= rep; i++){
        res+=((pow(x,((2*i)-1))/fact((2*i) -1))) * (pow(-1,i-1))
    }
    return res;
}
float logn(float x, int rep){
    float res = 0.00;
    for(float i = 1.00; i <= rep; i++){
        res+=(1/i)*pow(((x-1)/x),i)
    }
    return res;
}

float static fact(float numero)
{
    float f=1.00;
    
    for(int i=1;i<=numero;i++)
    {
        f*=i;
    }
    return f;
}
float static pow(float numero,float potencia)
{
    float pot;
    pot=1.00;
    for(int i= 1;i<=potencia;i++)
    {
        pot*=numero;
    }
    return pot;
}