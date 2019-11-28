#include "tipos.h"
#include "Calmacen.h"

int main() {
    Calmacen A1=crear_almacen(cin);
    A1.almacen_vacio();
    A1.imprimir_almacen_vacio();
    indicar_productos(A1,cin);
    A1.imprimir_almacen();
    indicar_robots(A1,cin);
    A1.imprimir_almacen();
    return 0;
}
