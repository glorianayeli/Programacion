#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int fg(int a, int b, int c, float &x1, float &x2);

int main()
{
    int a,b,c;
    float x1,x2;
    cout<<"ingresa a"<<"\t";cin>>a;
    cout<<"ingresa b"<<"\t";cin>>b;
    cout<<"ingresa c"<<"\t";cin>>c;
    if(fg(a,b,c,x1,x2)==0)
    {
        cout<<"error!!!!";
    }
    else
        cout<<"X1="<<x1<<endl<<"X2="<<x2;
    
}

int fg(int a, int b, int c, float &x1, float &x2)
{
    float dis;
    dis=pow(b,2)-4*a*c;
    if(dis<0)
    {
        return 0;
    }
    else
    {
        x1=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
        x2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    }
}
