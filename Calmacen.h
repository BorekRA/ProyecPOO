#include "tipos.h"
#include "Corden.h"
#include "Cproducto.h"
#include "Crobot.h"
class Calmacen {
    valor col;
    valor fil;
    vector<vector<texto>> slots;
public:
    Calmacen(valor c,valor f);
    void imprimir_almacen_vacio();
    void almacen_vacio();
    void agregar_productos(Cproducto P);
    void agregar_robot(Crobot rt);
    virtual ~Calmacen()=default;
    void imprimir_almacen();
};

Calmacen crear_almacen(istream& in);
void indicar_productos(Calmacen& A1, istream& in);
void robots(Calmacen& A1,istream& in);
