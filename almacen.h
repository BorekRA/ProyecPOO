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

class almacen {
private:
    longitud altura;
    longitud ancho;
    valor col;
    valor fil;
    sf::RenderWindows* canvas;
    vector<vector<slots>> slots;
    vector<producto> producto;
    void draw_rectangle(longitud x, longitud y,  f, valor c);
public:
    void get_slots(valor x,valor y);
    almacen(longitud h, longitud w, valor fl, valor cl, sf::RenderWindow *cnv);
    void draw();

};


#endif //PROYECPOO_ALMACEN_H
