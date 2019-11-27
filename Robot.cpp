#include <iostream>
#include "tipos.h"
#include "almacen.h"
void inicio(){
    cout<<"--------------------------------------------------"<<endl;
    valor columnas=0;
    valor filas=0;
    cout<<"# De Columnas: ";
    cin>>columnas;
    cout<<endl<<"# De Filas: ";
    cin>>filas;
    Calmacen A1(columnas,filas);
    A1.almacen_vacio();
    A1.imprimir_almacen_vacio();
    cout<<"--------------------------------------------------"<<endl;
}
void crear_robots(){
    valor numero_robots=0;
    cout<<"Número de Robots : ";
    cin>>numero_robots;
    cout<<endl;
    texto posicion_origen;
    /*
       * for(valor c=0;c<numero_robots;c++){
       * robot rc(c,[0][0],100,true);
       * rc.set_casa();
       * }
       */
    cout<<"--------------------------------------------------"<<endl;
    }
void menu(){
    cout<<"--------------------------------------------------"<<endl;
    cout<<"1.- Ingresar un producto"<<endl;
    cout<<"2.- Retirar un producto"<<endl;
    cout<<"3.- Estado de un Robot"<<endl;
    cout<<"4.- Estado del almacen"<<endl;
    cout<<"5.- Cerrar el programa"<<endl;
    cout<<"--------------------------------------------------"<<endl;
}
int main() {
    valor num_operaciones = 0;
    valor operacion = 0;
    inicio();
    crear_robots();
    cout << "-----Cuantas operaciones desea hacer ?----" << endl;
    cin >> num_operaciones;
    for (valor c = 0; c < num_operaciones; c++) {
        menu();
        cout << "-----Que operacion desea realizar ?----" << endl;
        cin >> operacion;
        //-------------------------------------------------------------------------------------
        valor robot = 0;
        cout << "Que robot desea que realize la operacion" << endl;
        cin >> robot;
        switch (operacion) {
            case 1:
                cout << "---Ingresar un producto---" << endl;
                robot = 0;
            case 2:
                cout << "---Retirar producto---" << endl;
                robot = 0;
            case 3:
                cout << "---Estado Robot---" << endl;
                robot = 0;
            case 4:
                cout << "---Almacen---" << endl;
                robot = 0;
            case 5:
                break;
        }
    }
}
