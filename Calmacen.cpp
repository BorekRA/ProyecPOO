#include "Calmacen.h"
#include "tipos.h"
#include "Cproducto.h"
#include "Corden.h"
#include "Crobot.h"

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
void Calmacen::agregar_productos(Cproducto P){
    slots[P.get_x()][P.get_y()] = P.get_letra();
}

void Calmacen::imprimir_almacen() {
    for (auto& row:slots){
        for (auto& item:row){cout<<setw(8)<<item;}
        cout<<endl;}
}

void Calmacen::agregar_robot(Crobot rt) {
    slots[rt.get_x()][rt.get_y()] = rt.get_nombre();
}

void Calmacen::execute_operation(Crobot* r, Cproducto* p, vector<vector<texto>> s, valor x, valor y) {
robot=r; producto=p;
slots=s;
r->set_posicion_r(x,y,slots);
p->set_posicion_p(x,y,slots);

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
    cantidad n;texto t;let r;posicion x;posicion y;cantidad c;
    cout<<"Indique la cantidad de productos que va a ingresar:";in>>n;
    for (cantidad i=0;i<n;i++){
        cout<<"Indique el producto a ingresar:";in>>t;
        cout<<"Con que letra lo va a representar:";in>>r;
        cout<<"Indique a que posicion quiere mandarlo:"<<endl;
        cout<<"Posicion x:";in>>x;
        cout<<"Posicion y:";in>>y;
        cout<<"Cantidad del producto:";in>>c;
        if (c==0) {cout<<"Indique una cantidad válida:";in>>c;}
        else if (x>A1.get_col()){cout<<"Posición no válida";in>>x;}
        else if (y>A1.get_fil() || y==1){cout<<"Posición no válida"<<endl;i++;}
        Cproducto P(t,r,x-1,y-1,c);
        A1.agregar_productos(P);}
}

void indicar_robots(Calmacen& A1,istream& in){
    cantidad n=A1.get_fil(); posicion x=0; posicion y=0;texto nom;
    cout << "¿Cuántos robots tendrá?---->";cin >> n;
    for (cantidad i = 0; i < n; i++) {
        cout << "Indique su nombre (ejemplo--> R9):";in >> nom;
        Crobot rt(nom, x, y);
        A1.agregar_robot(rt);
        x=x=1;
    }
}
void sacar_productos(Calmacen& A1, istream& in){
    texto t;let r;posicion x;posicion y;
    cout<<"Indique el nombre del producto:";in>>t;


}
//void tomar_producto(Crobot R,Cproducto P,Corden O);
//void tomar_producto(Crobot R,Cproducto P,Corden O){

//void dejar_producto();
//void retornar_casa();63
