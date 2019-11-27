#ifndef PROYECTO_POO_PRODUCTO_H
#define PROYECTO_POO_PRODUCTO_H

#include "tipos.h"
#include "robot.h"
#include "almacen.h"
#include "orden.h"

class Cproducto{
private:
    t_texto codigo;
    t_decimal peso; //estará en kilogramos segun la cantidad de productos que tenga
    t_decimal pesounitario;
    const t_decimal pesomax=10;
    t_texto fechaprod;  //fecha de producción
    t_ent cantidad; //cantidad del producto
    t_texto posicion;

public:
    Cproducto(t_texto cod,t_decimal punit, t_ent cant, t_texto fecha, t_texto pos);
    t_texto get_codigo();
    t_texto get_posicion();
    t_decimal get_peso();
    t_texto get_fecha();
    t_ent get_cantidad();
    void sumar_restar_cantidad( t_ent cant);
    void redistribuir_carga ();
    void set_cantidad(t_ent cant);
};


#endif //PROYECTO_POO_PRODUCTO_H
