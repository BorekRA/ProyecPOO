#include "Calmacen.h"
#include "tipos.h"
#include "Cproducto.h"
#include "Corden.h"

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
void Calmacen::agregar_productos(Cproducto P, Corden O){
    slots[O.get_x()][O.get_y()] = P.get_letra();
}

void Calmacen::imprimir_almacen() {
    for (auto& row:slots){
        for (auto& item:row){cout<<setw(8)<<item;}
        cout<<endl;}
}

Calmacen crear_almacen(istream& in){
    valor c1=0;
    valor f1=0;
    cout<<"#N de Columnas:";
    in>>c1;
    cout<<"#N de Filas:";
    in>>f1;
    Calmacen A(c1,f1);
    return A;}

void indicar_productos(Calmacen& A1, istream& in){
    cantidad n;texto t;let r;valor x;valor y;
    cout<<"Indique la cantidad de productos que va a ingresar:";
    in>>n;
    for (cantidad i=0;i<n;i++){
        cout<<"Indique el producto a ingresar:";
        in>>t;
        cout<<"Con que letra lo va a representar:";
        in>>r;
        Cproducto P(t,r);
        cout<<"Indique a que posicion quiere mandarlo:"<<endl;
        cout<<"Posicion x:";in>>x;
        cout<<"Posicion y:";in>>y;
        Corden O(x,y);
        A1.agregar_productos(P,O);}
}
