#include "robot.h"
#include "producto.h"
CRobot::CRobot(t_ent nam, t_posicion x, t_posicion y):name(nam), pos_x(x), pos_y(y) {
battery=100;
order = nullptr;
home[x][y];
}

t_ent CRobot::get_battery() {
    return battery;
}

banderita CRobot::set_state(banderita stad) {
    return state;
}

void CRobot::recharge_battery() {
if (battery==10) battery=100;
}

void CRobot::set_order(COrden *p_order) {
order=p_order;
}

void CRobot::alternate_state() {
    if (state != 0) state=false;
    if (state == 0) state=true;
}
void CRobot::mover_robot(t_posicion x, t_posicion y){
pos_x=x; pos_y=y;
    current_location[pos_x][pos_y];
}
