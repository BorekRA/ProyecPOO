#include "tipos.h"
#include "Corden.h"
#include "Cproducto.h"
class Calmacen {
    longitud altura;
    longitud ancho;
    valor col;
    valor fil;
    vector<vector<texto>> slots;
public:
    Calmacen(valor c,valor f);
    void imprimir_almacen_vacio();
    void almacen_vacio();
    void agregar_productos(Cproducto P,Corden O);
    //void agregar_robots(Crobot& ptrR);
    virtual ~Calmacen()=default;
    void imprimir_almacen();
};

Calmacen crear_almacen(istream& in);
void indicar_productos(Calmacen& A1, istream& in);
