#include <iostream>
using namespace std;
int factorial(int numero);
int potencia(int base,int potencia);
int main()
{
    float suma=0.00;
    int numero,limite;
    cout<<factorial(5)<<endl;
    cout<<potencia(3,4)<<endl;
    cout<<"Introduce el valor de x"<<"\t";
    cin>>numero;
    cout<<"¿Cuantas veces quieres correlo?"<<"\t";
    cin>>limite;
    for(int i=0;i<=limite;i++)
    {
        suma+=(float)potencia(numero,i)/factorial(i);
    }
    cout<<suma;
    return 0;
}

int factorial(int numero)
{
    int f=1.00;
    
    for(int i=1;i<=numero;i++)
    {
        f*=i;
    }
    return f;
}
int potencia(int numero,int potencia)
{
    int pot;
    pot=1.00;
    for(int i= 1;i<=potencia;i++)
    {
        pot*=numero;
    }
    return pot;
    
}
