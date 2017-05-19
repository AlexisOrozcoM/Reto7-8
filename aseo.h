#ifndef ASEO_H
#define ASEO_H
#include "producto.h"

class Aseo:public Producto
{
public:
    //Aseo();
    Aseo(QString codigo,QString nombre,int numUnidades,double costoUnit);
    double IVA();
    double subtotal();
    double total();
    QString getClass();
    ~Aseo();
};

#endif // ASEO_H
