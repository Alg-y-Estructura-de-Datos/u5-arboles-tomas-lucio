#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

void buscarSocios(ArbolBinario<int>& socios,int num)
{
    try
    {
        socios.search(num);
        cout<<"socio "<<num<<"encontrado"<<endl;
    }
    catch(int e)
    {
        cout<<"socio no encontrado"<<endl;
    } 
}

void eliminarSocios(ArbolBinario<int>& socios,int num)
{
   try
    {
        if(num==socios.search(num)){
            socios.remove(num);
            cout<<"socio eliminado"<<endl;
        }
    }
    catch(int e)
    {
        if (e==404)
        {
            cout<<"socio no encontrado"<<endl;
        }
    } 
}

void agregarSocios(ArbolBinario<int>& socios,int num)
{
    try
    {
        socios.search(num);
        cout<<"socio ya inscripto"<<endl;
    }
    catch(int e)
    {
        if (e==404)
        {
            socios.put(num);
        }
    }
}

int main() {
    ArbolBinario<int> socios;
    int op=1;
    int n;
    while (op!=0)
    {
        cout<<"ingrese la op que desea realizar 1) agragar user 2) eliminar user 3) verificar actividad 4)mostrar"<<endl;
        cin>>op;
        switch (op)
        {
        case 1:
            cin>>n;
            agregarSocios(socios,n);
            break;
        case 2:
            cin>>n;
            eliminarSocios(socios,n);
            break;
        case 3:
            cin>>n;
            buscarSocios(socios,n);
            break;
        case 4:
            socios.print();
            break;
        default:
            cout<<"ingrse num valido"<<endl;
            break;
        }
    }
    
    return 0;
}
