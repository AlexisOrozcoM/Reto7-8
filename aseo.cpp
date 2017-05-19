#include "aseo.h"

Aseo::Aseo(QString codigo,QString nombre,int numUnidades,double costoUnit):Producto(codigo, nombre, numUnidades, costoUnit)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->numUnidades = numUnidades;
    this->costoUnit = costoUnit;
}

double Aseo::subtotal(){
    double n=0;
    n = numUnidades * costoUnit;
    return n;
}

double Aseo::IVA(){
    double n=0;
    n = subtotal() * 0.1;
    return n;
}

double Aseo::total(){
    double n=0;
    n = subtotal() + IVA();
    return n;
}

QString Aseo::getClass(){
    return "Aseo";
}

Aseo::~Aseo(){

}
