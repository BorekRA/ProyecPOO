//
// Created by norel on 10/21/19.
//

#ifndef PROYECTOPOO_ROBOT_H
#define PROYECTOPOO_ROBOT_H
#include "tipos.h"
class robot {
  private:
  posicion x1;
  posicion y1;
  valor numero;
  posicion x2;
  posicion y2;
  banderita estado;
  valor bateria;
  public:
  void set.casa(posicion x, posicion y);
  void set.destino(posicion x, posicion y);
  void set.estado(banderita estado);
  void get.orden();
  
};
#endif //PROYECTOPOO_ROBOT_H
