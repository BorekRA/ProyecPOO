//
//Created by Lopez 10/21/2019
//

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>
using namespace std;
typedef int Type_e;
typedef double Type_d;
typedef char Type_c;
typedef unsigned long int  Type_l;
typedef std::string Type_s;
typedef int Type_i;
class Cproducto{
private:
    Type_l codigo;
    Type_d peso; //estará en kilogramos segun la cantidad de productos que tenga
    Type_d pesounitario;
    Type_d tamagno;
    Type_s fechaprod;  //fecha de producción
    Type_e cantidad; //cantidad del producto
    /*codigo del producto El codigo sera
     de 3 digitos (por ahora), los dos primeros números corresponden al nuemero de la letra de la primera letra del nombre del producto, el tercer y cuarto
     digito sera el numero de la ultima letra del nombre del producto más el valor de los ods primeros digitos, por ejemplo agua serà 0102*/
public:
    Cproducto(Type_l cod, Type_d tam,Type_d pesounitario, Type_e cantidad, Type_s fecha);
    Type_l get_codigo();
    Type_d get_peso();
    Type_d get_tamagno();
    Type_s get_fecha();
    Type_e get_cantidad();
    void set_cantidad(Type_i cant);
};

#endif
