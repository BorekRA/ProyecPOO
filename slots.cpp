#include "slots.h"
using "slots.h"
using "robots.h"
using "producto.h"
slots_t::slots_t(long ejeX,long ejeY):ejeX{x},ejeY{y} {
 ejeX=x;
 ejeY=y;
}
long slots_t::get_ejeX(){
 return ejeX; 
}
long slots_t::get_ejeY(){
 return ejeY; 
}
