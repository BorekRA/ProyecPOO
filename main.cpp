#include <iostream>
#include "tipos.h"
#include "Calmacen.h"
int main() {
        menu_principal();
        Calmacen A1=crear_almacen(cin);
        A1.almacen_vacio();
        A1.imprimir_almacen_vacio();
        indicar_robots(A1, cin);//agregar robots
        A1.imprimir_almacen();
        bool continuar = true;
        while (continuar == true) {
            t_ent operacion = 0;
            cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
            cout << "Que operacion desea hacer??  " << endl;
            cout << "1.- Ingresar un producto" << endl;
            cout << "2.- Retirar un producto" << endl;
            cout << "3.- Estado del Robot" << endl;
            cout << "4.- Imprimir Almacen" << endl;
            cout <<" 5.- Cerrar el progrma"<<endl;
            cout << "Indica el número de la operación" << endl;
            cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
            cin >> operacion;
            switch (operacion) {
                case 1:
                    indicar_productos(A1, cin);//agregar productos
                    A1.imprimir_almacen();
                case 4:
                    A1.imprimir_almacen();
                case 5:
                    continuar=false;
                    break;
            }
        }
        return 0;
}
