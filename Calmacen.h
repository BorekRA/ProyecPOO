#ifndef PROYECPOOFINAL_CALMACEN_H
#define PROYECPOOFINAL_CALMACEN_H
#include "tipos.h"
#include "Corden.h"
#include "Cproducto.h"
#include "Crobot.h"
class Calmacen {
    valor col;
    valor fil;
    vector<vector<texto>> slots;
    vector<Crobot*&>v;
    vector<Cproducto*&> n;
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
    void rellenar_vector_robots(Crobot*& R);
    void rellenar_vector_productos(Cproducto*& P);
    void usar_robot();
};

Calmacen crear_almacen(istream& in);
void indicar_productos(Calmacen& A1, istream& in);
void indicar_robots(Calmacen& A1,istream& in);


#endif //PROYECPOOFINAL_CALMACEN_H
