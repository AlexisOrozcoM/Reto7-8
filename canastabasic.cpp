#include "canastabasic.h"

CanastaBasic::CanastaBasic(QString codigo,QString nombre,int numUnidades,double costoUnit):Producto(codigo, nombre, numUnidades, costoUnit){

    this->codigo = codigo;
    this->nombre = nombre;
    this->numUnidades = numUnidades;
    this->costoUnit = costoUnit;
}

double CanastaBasic::subtotal(){
    double n=0;
    n = numUnidades * costoUnit;
    return n;
}

double CanastaBasic::IVA(){
    double n=0;
    n = subtotal() * 0.1;
    return n;
}

double CanastaBasic::total(){
    double n=0;
    n = subtotal() + IVA();
    return n;
}

QString CanastaBasic::getClass(){
    return "C. Basica";
}

CanastaBasic::~CanastaBasic(){

}
