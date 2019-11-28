#ifndef PROYECTO_POO_ORDEN_H
#define PROYECTO_POO_ORDEN_H
  
#include "tipos.h"
class Corden{
    valor posx;
    valor posy;

public:
    Corden(valor x, valor y){
        posx=x;
        posy=y;
    }
    valor get_x(){return posx;};
    valor get_y(){return posy;};

};

#endif //PROYECTO_POO_ORDEN_H
