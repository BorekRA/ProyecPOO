//
//Created by Lopez 10/21/2019
//

#ifndef PRODUCTO_H
#define PRODUCTO_H

typedef int Type_e;
typedef double Type_d;
typedef char Type_c;
typedef unsigned long int  Type_l;
typedef std::string Type_s;

class Cproducto{
  private:
    Type_l código; //codigo del producto
    Type_d peso; 
    Type_d tamagno; 
    Type_s fechaprod;  //fecha de producción
  public:
    Type_e adinv(); //Aumentar o Disminuir Inv
};

#endif
