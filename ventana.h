#ifndef VENTANA_H
#define VENTANA_H

#include <QMainWindow>
#include "producto.h"
#include "aseo.h"
#include "general.h"
#include "canastabasic.h"
#include <vector>

using std::vector;

namespace Ui {
class Ventana;
}

class Ventana : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ventana(QWidget *parent = 0);
    ~Ventana();

private slots:
    void on_Crear_clicked();

    void on_categoria_activated(const QString &arg1);

    void on_Listar_clicked();

private:
    Ui::Ventana *ui;
    vector<Aseo*> listaProdAseo;
    vector<General*> listaProdGeneral;
    vector<CanastaBasic*> listaProdBasic;
};

#endif // VENTANA_H



