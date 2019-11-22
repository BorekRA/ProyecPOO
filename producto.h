//
//Created by Lopez 10/21/2019
//

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include "tipos.h"
using namespace std;

class Cproducto{
private:
    t_texto codigo;
    t_decimal peso; //estará en kilogramos segun la cantidad de productos que tenga
    t_decimal pesounitario;
    const t_decimal pesomax=10;
    t_texto fechaprod;  //fecha de producción
    t_ent cantidad; //cantidad del producto
    t_texto posicion;

    /*codigo del producto El codigo sera
     de 3 digitos (por ahora), los dos primeros números corresponden al nuemero de la letra de la primera letra del nombre del producto, el tercer y cuarto
     digito sera el numero de la ultima letra del nombre del producto más el valor de los dos primeros digitos, por ejemplo agua serà 0102*/
public:
    Cproducto(t_texto cod,t_decimal punit, t_ent cant, t_texto fecha, t_texto pos);
    t_texto get_codigo();
    t_texto get_posicion();
    t_decimal get_peso();
    t_texto get_fecha();
    t_ent get_cantidad();
    void set_cantidad(t_ent cant);
    void sumar_restar_cantidad( t_ent cant);
    void redistribuir_carga ();
};

#endif
