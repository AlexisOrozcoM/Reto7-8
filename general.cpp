#include "general.h"

General::General(QString codigo,QString nombre,int numUnidades,double costoUnit):Producto(codigo, nombre, numUnidades, costoUnit){
    this->codigo = codigo;
    this->nombre = nombre;
    this->numUnidades = numUnidades;
    this->costoUnit = costoUnit;
}

double General::subtotal(){
    double n=0;
    n = numUnidades * costoUnit;
    return n;
}

double General::IVA(){
    double n=0;
    n = subtotal() * 0.19;
    return n;
}

double General::total(){
    double n=0;
    n = subtotal() + IVA();
    return n;
}

QString General::getClass(){
    return "General";
}

General::~General(){

}
