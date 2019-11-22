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
//Main creado por Mateo xd
/*#include <iostream>
#include "tipos.h"
#include "almacen.h"
int main() {
    valor c1=0;
    valor f1=0;
    cout<<"#N de Columnas:";
    cin>>c1;
    cout<<"#N de Filas:";
    cin>>f1;
    Calmacen A1(c1,f1);
    A1.almacen_vacio();
    A1.imprimir_almacen_vacio();
}
 */

