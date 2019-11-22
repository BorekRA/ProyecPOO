#include "almacen.h"
#include "tipos.h"
Calmacen::Calmacen(valor c, valor f):col{c},fil{f},slots(fil,vector<texto>(col)){
}


void Calmacen::almacen_vacio() {
    for (auto& row:slots)
        for (auto& item:row)
            item="*";
}
void Calmacen::imprimir_almacen_vacio(){
    cout<<"Este es el almacen vacío:"<<endl;
    for (auto& row:slots){
        for (auto& item:row){cout<<setw(4)<<item;}
        cout<<endl;}
}

