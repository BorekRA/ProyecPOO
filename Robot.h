//
// Created by norel on 10/21/19.
//

#ifndef PROYECTOPOO_ROBOT_H
#define PROYECTOPOO_ROBOT_H
// ------poner using Clase=tipo; de todas las clases-----
using producto=int;
using slot=int;
//--------------------------------------------------------
class Robot {
 private:
  //----tipo int---
  entero numero_robot;
  //----Tipo doble---
  deci peso;
  deci bateria;
  //---Tipo texto -----
  str estado;
  str producto_llevar;
  //---tipo posicion--
  posicion casa;
  posicion y;
  posicion x;
 public:
  estado();
  posicion();//--para x e y---
  consegur destino();
  mover();
  dar();
  coger();
};
//--------------------------------------------------------
#endif //PROYECTOPOO_ROBOT_H
