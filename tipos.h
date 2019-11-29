#ifndef PROYECTO_POO_TIPOS_H
#define PROYECTO_POO_TIPOS_H




#include<iostream>
#include <vector>
#include<string>
#include <iomanip>

using namespace std;
using longitud=int;
using cantidad=int;
using posicion=size_t;
using t_posicion=unsigned int;
using decimal=double;
using texto=string;
using valor=unsigned int;
typedef vector<vector<int>> vetr;
typedef vector<int> row_t;
typedef vector<row_t> matrix_t;
typedef bool banderita;
using let=char;
using t_ent=int;
using verificador=bool;
void menu_principal();
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

#endif //PROYECTO_POO_TIPOS_H
