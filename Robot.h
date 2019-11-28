#ifndef PROYECTO_POO_ROBOT_H
#define PROYECTO_POO_ROBOT_H

#include "tipos.h"
#include "Corden.h"
#include "Cproducto.h"

class Crobot {
private:
    posicion pos_x;
    posicion pos_y;
    matrix_t home;
    matrix_t current_location;
    texto name;
    verificador state= true;
    t_ent battery;
public:
    Crobot(texto nam, t_posicion x, t_posicion y);
    t_ent get_battery();
    banderita set_state(banderita stad);
    void recharge_battery();
    void alternate_state();
    void mover_robot(t_posicion x, t_posicion y);
    texto get_nombre(){return name;}
    valor get_x(){return pos_x;};
    valor get_y(){return pos_y;};
};


#endif //PROYECTO_POO_ROBOT_H

