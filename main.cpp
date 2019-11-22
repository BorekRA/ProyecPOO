#include <iostream>
#include "tipos.h"
//CREAR FUNCIONES PARA Q NO SEA TAN LARGO 
int main() {
    cout<<"--------------------------------------------------"<<endl;
    texto largo=" ";
    texto ancho=" ";
    cout<<"Largo del almacen: ";
    cin>>largo;
    cout<<endl<<"Ancho del almacen: ";
    cin>>ancho;
    //CREAR ALMACEN----------------------------------------
    cout<<"--------------------------------------------------"<<endl;
    valor numero_robots=0;
    cout<<"Número de Robots : ";
    cin>>numero_robots;
    cout<<endl;
    texto posicion_origen;
    for(valor i=0;i<numero_robots;i++){
        cout<<"Origen del Robot #"<<i+1<<endl;
        cin>>posicion_origen;
        //-----------------------Crear i robots y setear casas
        }
    valor numero_instrucciones=0;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Numero de instrucciones: ";
    cin>>numero_instrucciones;
    for(valor c=0;c<numero_instrucciones;c++){
        cout<<"--------------------------------------------------"<<endl;
        valor operacion=0;
        cout<<"Que operacion desea hacer??  "<<endl;
        cout<<"1.- Ingresar un producto"<<endl;
        cout<<"2.- Retirar un producto"<<endl;
        cout<<"3.- Estado del Robot"<<endl;
        cout<<"4.- Cerrar el programa"<<endl;
        cin>>operacion;
        if(operacion==1){
            cout<<endl<<"--------------------------------------------------"<<endl;
            cout<<"Que numero de Robot desea que realice la operacion"<<endl;
            valor robotx=0;
            cin>>robotx;
        }
        if(operacion==2) {
            cout << endl << "--------------------------------------------------" << endl;
            cout << endl << "Que numero de Robot desea que realice la operacion";
            valor robotx=0;
            cin>>robotx;
            //robotx.retirar
        }
        if(operacion==3){
            cout<<endl<<"--------------------------------------------------"<<endl;
            cout<<endl<<"Que numero de Robot desea que realice la operacion:  ";
            valor robotx=0;
            cin>>robotx;
            cout<<"    Robot #"<<robotx;
            cout<<endl<<"    Destino: ";
            cout<<endl<<"    Producto: ";
            cout<<endl<<"    % Bateria: ";
            cout<<endl<<"--------------------------------------------------"<<endl;
        }
        if(operacion==4)
            break;
        }

}
