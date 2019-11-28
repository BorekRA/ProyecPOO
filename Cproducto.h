#ifndef PROYECTO_POO_PRODUCTO_H
#define PROYECTO_POO_PRODUCTO_H

#include "tipos.h"

class Cproducto{
    texto nombre;
    let letra;
public:
    Cproducto(texto n,let l);
    void set_nombre(texto n);
    void set_letra(let l);
    texto get_nombre();
    let get_letra();
};


#endif //PROYECTO_POO_PRODUCTO_H
