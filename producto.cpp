#include "producto.h"

Cproducto::Cproducto(Type_l cod, Type_d tam,Type_d punit, Type_e cant, Type_s fecha)
:codigo(cod),tamagno(tam), fechaprod(fecha),cantidad(cant),pesounitario(punit){

}

void Cproducto::set_cantidad(Type_i cant) {
cantidad=+cant; //falta agregar el limite de productos que pueden caber en el contenedor por el tamañ que tiene cada producto
}


Type_l Cproducto::get_codigo() {
    return codigo;
}

Type_d Cproducto::get_peso() {
    peso=cantidad*pesounitario; //Falta agregar el valor de peso constante que pesa el contenedor
    return peso;
}

Type_d Cproducto::get_tamagno() {
    return tamagno;
}

Type_s Cproducto::get_fecha() {
    return fechaprod;
}

Type_e Cproducto::get_cantidad() {
    return cantidad;
}

