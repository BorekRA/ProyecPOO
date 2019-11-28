#ifndef PROYECTO_POO_PRODUCTO_H
#define PROYECTO_POO_PRODUCTO_H
#include "tipos.h"

class Cproducto{
    texto nombre;
    let letra;
    posicion posx;
    posicion posy;
    cantidad cuantos;
public:
    Cproducto(texto n,let l, posicion x, posicion y,cantidad c);
    void set_nombre(texto n);
    valor get_x(){return posx;};
    valor get_y(){return posy;};
    void set_letra(let l);
    texto get_nombre();
    let get_letra();
};

#endif //PROYECTO_POO_PRODUCTO_H
