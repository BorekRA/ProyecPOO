#include "Crobot.h"
#include "Cproducto.h"
Crobot::Crobot(texto nam, t_posicion x, t_posicion y):name{nam}, pos_x{x}, pos_y{y} {
    battery=100;
    home[x][y];
}

t_ent Crobot::get_battery() {
    return battery;
}

banderita Crobot::set_state(banderita stad) {
    return state;
}

void Crobot::recharge_battery() {
    if (battery==10) battery=100;
}


void Crobot::alternate_state() {
    if (state != 0) state=false;
    if (state == 0) state=true;
}
void Crobot::mover_robot(t_posicion x, t_posicion y){
    pos_x=x; pos_y=y;
    current_location[pos_x][pos_y];
}
