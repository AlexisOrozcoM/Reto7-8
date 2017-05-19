#include "producto.h"

Producto::Producto(){
    this->codigo = "";
    this->nombre = "";
    //this->categoria = "";
    this->numUnidades = 0;
    this->costoUnit = 0;

}

Producto::Producto(QString codigo,QString nombre,int numUnidades,double costoUnit){
    this->codigo = codigo;
    this->nombre = nombre;
    //this->categoria = categoria;
    this->numUnidades = numUnidades;
    this->costoUnit = costoUnit;

}

QString Producto::getCodigo(){
   return codigo;
}

QString Producto::getNombre(){
    return nombre;
}


/*QString Producto::getCategoria(){

    return categoria;
}*/


int Producto::getNumUnidades(){
    return numUnidades;
}

double Producto::getCostoUnit(){
    return costoUnit;
}

void Producto::setCodigo(QString codigo){
    this->codigo=codigo;
}

void Producto::setNombre(QString nombre){
    this->nombre=nombre;
}


/*void Producto::setCategoria(QString categoria){

    this->categoria=categoria;
}*/


void Producto::setNumUnidades(int numUnidades){
    this->numUnidades=numUnidades;
}

void Producto::setCostoUnit(double costoUnit){
    this->costoUnit=costoUnit;
}


