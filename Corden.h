#ifndef PROYECTO_POO_ORDEN_H
#define PROYECTO_POO_ORDEN_H
  
#include "tipos.h"
class COrden {
private:
    //t_ent prioridad;  aun en implementacion
    t_posicion pos_x;
    t_posicion pos_y;
    CRobot* robot=nullptr;
    Cproducto* producto= nullptr;
public:
    //void set_prioridad (t_ent prior);
    void execute_order(t_ent n, CRobot* rob,Cproducto* prod, t_posicion x, t_posicion y);
    void recoger_producto(t_posicion x, t_posicion y);
    void almacenar_producto(t_posicion x, t_posicion y);
    void set_recharge(t_posicion x, t_posicion y);
    //void sumar_restar_cantidad( t_ent cant, Cproducto prod);

};

#endif //PROYECTO_POO_ORDEN_H
