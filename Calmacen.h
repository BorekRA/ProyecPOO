#ifndef PROYECTO_POO_CALMACEN_H
#define PROYECTO_POO_CALMACEN_H
#include "tipos.h"
#include "Corden.h"
#include "Cproducto.h"
#include "Crobot.h"
class Calmacen {
    valor col;
    valor fil;
    vector<vector<texto>> slots;
    Crobot* robot= nullptr;
    Cproducto* producto= nullptr;
public:
    Calmacen(valor c,valor f);
    void imprimir_almacen_vacio();
    void almacen_vacio();
    void agregar_productos(Cproducto P);
    valor get_col(){return col;}
    valor get_fil(){return fil;}
    void agregar_robot(Crobot rt);
    virtual ~Calmacen()=default;
    void imprimir_almacen();
    void execute_operation(Crobot* r, Cproducto* p, vector<vector<texto>> s, valor x, valor y);
};
Calmacen crear_almacen(istream& in);
void indicar_productos(Calmacen& A1, istream& in);
void indicar_robots(Calmacen& A1,istream& in);
#endif //PROYECTO_POO2_CALMACEN_H
