#ifndef PROYECTO_POO_ORDEN_H
#define PROYECTO_POO_ORDEN_H

#include "robot.h"
#include "tipos.h"
#include "producto.h"

class COrden {
private:
    t_ent prioridad;
    t_posicion pos_x;
    t_posicion pox_y;

public:
    COrden(t_posicion x, t_posicion y);
    void set_prioridad (t_ent prior);
    void recoger_producto(t_posicion x, t_posicion y);
    void almacenar_producto(t_posicion x, t_posicion y);
    void cambiar_producto(t_posicion x, t_posicion y);
    void set_destino(t_posicion x, t_posicion y);
    //void sumar_restar_cantidad( t_ent cant, Cproducto prod);

};

#endif //PROYECTO_POO_ORDEN_H
