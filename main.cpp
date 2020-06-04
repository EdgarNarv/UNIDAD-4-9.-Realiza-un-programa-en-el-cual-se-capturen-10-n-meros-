#include <iostream>

using namespace std;

int main()
{

    int mult=0;
    double div=0;
    int numeros[10];
    int suma=1;
    int resta=-1;
    int multiplicacion=0;
    double division=0;

    for (int x=0;x<10;x++)
    {
        cout<<"Ingrese el numero "<<x<<": ";
        cin>>numeros[x];
        cout<<endl;

    }
    mult=numeros[0];
    div=numeros[0];
    for (int x=0;x<10;x++)
    {
        suma+=numeros[x];
        resta-=numeros[x];

    }
    for (int x=1;x<10;x++)
    {
       multiplicacion=mult*numeros[x];
       mult=multiplicacion;
       division=div/numeros[x];
       div=division;
    }
    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    cout<<"Multiplicacion: "<<multiplicacion<<endl;
    cout<<"Division: "<<division<<endl;
    return 0;
}
