//
// Created by Mate on 31/10/2019.
//

#ifndef PROYECPOO_ALMACEN_H
#define PROYECPOO_ALMACEN_H
#include "robot.h"
#include "slots.h"
#include "producto.h"
#include <SMFL/Graphics/RenderWindow.hpp>
#include "tipos.h"

class Calmacen {
private:
    longitud altura;
    longitud ancho;
    valor col;
    valor fil;
    sf::RenderWindows* canvas;
    mtr slots;
    vtr producto;
    void draw_rectangle(posicion a, posicion b, longitud x, longitud y);
public:
    void get_slots(valor x,valor y);
    almacen(longitud x, longitud y, valor fl, valor cl, sf::RenderWindow *cnv);
    void draw();

};


#endif //PROYECPOO_ALMACEN_H
