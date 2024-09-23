#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {

    ArbolBinario<int> Inventario;

    Inventario.put(4001);
    Inventario.put(2002);
    Inventario.put(6003);
    Inventario.put(1500);
    Inventario.put(3500);
    Inventario.put(5000);
    Inventario.put(7000);

    Inventario.print();

    Inventario.remove(2002);
    Inventario.remove(6003);

    Inventario.put(2500);
    try{
        if(Inventario.search(4001))
        {
            cout<< " el codigo 4001 sigue en el inventario"<<endl;
        }
    }
    catch(int e){
        if (e==404){
        cout <<"numero no encontrado"<<endl;
        }
    }

    Inventario.print();
    return 0;
}
