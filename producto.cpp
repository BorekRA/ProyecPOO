#include "producto.h"

Cproducto::Cproducto(t_texto cod, t_decimal punit, t_ent cant, t_texto fecha, t_texto pos):codigo(cod),fechaprod(fecha),
cantidad(cant),pesounitario(punit), posicion(pos) {

}

t_texto Cproducto::get_codigo() {
    return codigo;
}

t_decimal Cproducto::get_peso() {
    peso=pesounitario*cantidad;
    return peso;
}

t_texto Cproducto::get_fecha() {
    return fechaprod;
}

t_ent Cproducto::get_cantidad() {
    return cantidad;
}

void Cproducto::set_cantidad(t_ent cant) {
cantidad=cant;
}

void Cproducto::sumar_restar_cantidad(t_ent cant) {
cantidad+=cant;
redistribuir_carga();
}

void Cproducto::redistribuir_carga() {
    int exceso;
    int cant1=cantidad;
    int cont;
    if (peso<pesomax) {
        for (double i = 0; i < pesomax; i++) {
            i += pesounitario;
            cont += 1;
        }
        exceso = cant1 - cont;
        cout<<"Hay"<<exceso<<"productos que exceden la carga máxima permitida. Favor de ingresar una cantidad menor";
        set_cantidad(cont);
    }
}

t_texto Cproducto::get_posicion() {
    return t_texto();
}
