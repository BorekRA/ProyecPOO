#include "Robot.h"
#include "Slot.h"
#include "Producto.h"
Crobot::Crobot(valor num, matrix_t cs, valor btr, banderita stad):numero(num), casa(cs), estado (stad){

}

valor Crobot::get_bateria() {
    return bateria;
}

valor Crobot::get_orden() {
    return orden;
}

void Crobot::set_casa(matrix_t cs) {
valor x,y;
cin>>x;
cin>>y;
cs[x][y];
casa=cs;
}

void Crobot::set_destino(matrix_t dest) {
    valor x,y;
    if(dest==casa) destino=casa;
    else{
    cin>>x;
    cin>>y;
    dest[x][y];
    destino=dest;}
}

banderita Crobot::set_estado(banderita stad) {
    if(estado="ocupado"){
        stad=false;
    }
    else{
        stad=true;
    }
}

void Crobot::set_bateria() {
valor num_mov;
    if (num_mov==5)bateria-=5;
}
void Crobot::recargar_bateria() {
    if(bateria==10) {
        set_destino(casa);
        bateria = 100;
    }
}

void Crobot::set_orden(valor odr) {
orden=odr;
}

