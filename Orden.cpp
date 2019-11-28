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
