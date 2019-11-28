#include "Corden.h"
void COrden::execute_order(t_ent n, CRobot* rob, Cproducto* prod,t_posicion x, t_posicion y){
    robot=rob;
    producto=prod;
    switch (n){
        case 1: set_recharge(x,y);
        case 2: recoger_producto(x, y);
        case 3: almacenar_producto(x,y);
    }
}
void COrden::recoger_producto(t_posicion x, t_posicion y){
    robot->mover_robot(x, y);
    producto->mover_producto(x, y);
};
void COrden::almacenar_producto(t_posicion x, t_posicion y){
    robot->mover_robot(x, y);
    producto->mover_producto(0, 0);
};

void COrden::set_recharge(t_posicion x, t_posicion y) {
    robot->mover_robot(x, y);
