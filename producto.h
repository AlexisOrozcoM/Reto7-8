#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QString>

class Producto
{
protected:
    QString codigo;
    QString nombre;
    int numUnidades;
    double costoUnit;
    //QString categoria;

public:
    Producto();
    Producto(QString codigo,QString nombre,/*QString categoria ,*/int numUnidades,double costoUnit);

    QString getCodigo();
    QString getNombre();
    //QString getCategoria();
    int getNumUnidades();
    double getCostoUnit();



    void setCodigo(QString codigo);
    void setNombre(QString nombre);
    //void setCategoria(QString categoria);
    void setNumUnidades(int numUnidades);
    void setCostoUnit(double costoUnit);

    virtual double subtotal()=0;
    virtual double total()=0;
    virtual double IVA()=0;

};

#endif // PRODUCTO_H
