#ifndef GENERAL_H
#define GENERAL_H
#include "producto.h"

class General: public Producto
{
protected:

public:
    General(QString codigo,QString nombre,int numUnidades,double costoUnit);
    double IVA();
    double subtotal();
    double total();
    QString getClass();
    ~General();
};

#endif // GENERAL_H
