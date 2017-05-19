#ifndef CANASTABASIC_H
#define CANASTABASIC_H

#include "producto.h"

class CanastaBasic:public Producto
{
public:
   // CanastaBasic();
    CanastaBasic(QString codigo,QString nombre,int numUnidades,double costoUnit);
    double IVA();
    double subtotal();
    double total();
    QString getClass();
    ~CanastaBasic();
};

#endif // CANASTABASIC_H
