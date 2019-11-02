//
// Created by norel on 10/21/19.
//

#ifndef PROYECTOPOO_ROBOT_H
#define PROYECTOPOO_ROBOT_H
#include "tipos.h"
class Crobot {
private:
    /*
    posicion x1; //para settear la posicion de la casa del robot
    posicion y1;
    */
    matrix_t casa;
    valor numero; //numero de robot
    /*
    posicion x2; // para el destino
    posicion y2;
    */
    matrix_t destino;
    banderita estado;
    valor bateria;
    valor orden;
public:
    Crobot(valor num, matrix_t cs, valor btr, banderita stad);
    valor get_bateria();
    valor get_orden();
    banderita set_estado(banderita stad);
    void set_casa(matrix_t cs);
    void set_destino(matrix_t dest);
    void set_bateria();
    void recargar_bateria();
    void set_orden(valor odr);

};

#endif //PROYECTOPOO_ROBOT_H
