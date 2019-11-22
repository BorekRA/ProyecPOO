//#include "robot.h"
//#include "slots.h"
//#include "producto.h"
#include "tipos.h"

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
    //void agregar_slot(CSlot &ptrslot);
    virtual ~Calmacen()=default;
};

