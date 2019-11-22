#include "slots.h"
using "slots.h"
using "robots.h"
using "producto.h"
slosts_t::slosts_t(long ejex, long ejey):ejex{ejex},ejey{ejey} {
}

long slosts_t::get_posx() {
    return ejex;
}

long slosts_t::get_posy() {
    return ejey;
}
