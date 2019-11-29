#ifndef PROYECTO_POO_ROBOT_H
#define PROYECTO_POO_ROBOT_H
#include "tipos.h"

class Crobot {
private:
    posicion pos_x;
    posicion pos_y;
    texto nombre;

public:
    Crobot(texto nam, posicion x, posicion y){
        nombre=nam;
        pos_x=x;
        pos_y=y;
    };
    texto get_nombre(){return nombre;}
    valor get_x(){return pos_x;};
    valor get_y(){return pos_y;};
    void set_posicion_r(valor x, valor y, vector<vector<texto>> s);

};
#endif //PROYECTO_POO_ROBOT_H

