#ifndef PROYECTO_POO_ROBOT_H
#define PROYECTO_POO_ROBOT_H

#include "tipos.h"
#include "orden.h"
#include "producto.h"

class CRobot {
private:
    posicion pos_x;
    posicion pos_y;
    matrix_t home;
    t_ent name;
    verificador state= true;
    t_ent battery;
    COrden* order;
public:
    CRobot(t_ent nam, t_posicion x, t_posicion y);
    t_ent get_battery();
    banderita set_state(banderita stad);
    void recharge_battery();
    void set_order(COrden* p_order);
    void alternate_state();


};
#endif //PROYECTO_POO_ROBOT_H

