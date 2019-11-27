#include "funciones.h"
#include "tipos.h"
#include "almacen.h"
void menu_principal() {
    cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"<<endl;
    cout<<"-------------------**********---------------------"<<endl;
    cout<<"...................BIENVENIDO....................."<<endl;
    cout<<"-------------------**********---------------------"<<endl;
    cout<<"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"<<endl;
    cout<<endl;
    cout<<"Programa creado por:"<<endl;
    cout<<"Leonardo López"<<endl<<"Mateo Malla"<<endl<<"Norel Rodriguez"<<endl;
    cout<<endl;
}
void agregar_robots() {
    cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"<<endl;
    cout<<"-----------------Menu: Agregar Robots-------------"<<endl;
    cout<<"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"<<endl;
    cout<<endl;
    valor numero_robots=0;
    cout<<"Número de Robots : "; cin>>numero_robots;
    cout<<endl;
    cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"<<endl;
    t_ent x, y;
    for(valor i=0;i<numero_robots;i++){
        cout<<"Origen del Robot #"<<i+1<<endl;
        cout<<"Posicion del Robot en cordenas x: "; cin>>x; cout<<endl;
        cout<<"Posicion del Robot en cordenas y: "; cin>>y; cout<<endl;
    }
//Crear n robots y settear casas
}

void agregar_productos() {

}

void print_almacen() {
    cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"<<endl;
    cout<<"------------------Menu: Ordenes-------------------"<<endl;
    cout<<"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"<<endl<<endl;
    valor columnas=0;
    valor filas=0;
    cout<<"# De Columnas: ";
    cin>>columnas;
    cout<<endl<<"# De Filas: ";
    cin>>filas;
    Calmacen A1(columnas,filas);
    A1.almacen_vacio();
    A1.imprimir_almacen_vacio();
}

void ejecucion_de_ordenes() {
    bool continuar = true;
    while (continuar == true) {
        t_ent operacion = 0;
        cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
        cout << "Que operacion desea hacer??  " << endl;
        cout << "1.- Ingresar un producto" << endl;
        cout << "2.- Retirar un producto" << endl;
        cout << "3.- Estado del Robot" << endl;
        cout << "4.- Cerrar el programa" << endl;
        cout << "Indica el número de la operación" << endl;
        cout << "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW" << endl;
        cin >> operacion;
        switch (operacion) {
            case 1: {
                cout << endl << "--------------------------------------------------" << endl;
                cout << "Que numero de Robot desea que realice la operacion" << endl;
                valor robotx = 0;
                cin >> robotx;
                break;
            }
            case 2: {
                cout << endl << "--------------------------------------------------" << endl;
                cout << endl << "Que numero de Robot desea que realice la operacion";
                valor robotx = 0;
                cin >> robotx;
                //robotx.retirar
                break;
            }
            case 3: {
                cout << endl << "--------------------------------------------------" << endl;
                cout << endl << "Que numero de Robot desea que realice la operacion:  ";
                valor robotx = 0;
                cin >> robotx;
                cout << "    Robot #" << robotx;
                cout << endl << "    Destino: ";
                cout << endl << "    Producto: ";
                cout << endl << "    % Bateria: ";
                cout << endl << "--------------------------------------------------" << endl;
                break;
            }
            case 4: {
                continuar = false;
                break;
            }
        }

    }
}
