#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ventana)
{
    ui->setupUi(this);
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::on_Crear_clicked()
{

    QString codigo = ui->codigo->text();
    QString nombre = ui->nombre->text();
    int numUnidades = ui->numUnidadades->text().toInt();
    double costoUnit = ui->costoUnit->text().toDouble();
    QString categoria = ui->categoria->currentText();

    if(categoria=="General"){

        General * objProdGeneral = new General(codigo, nombre, numUnidades, costoUnit);

        listaProdGeneral.push_back(objProdGeneral);

        ui->codigo->setText("");
        ui->nombre->setText("");
        ui->numUnidadades->setText("");
        ui->costoUnit->setText("");
    }

    if(categoria=="Aseo"){

        Aseo * objAseo = new Aseo(codigo, nombre, numUnidades, costoUnit);

        listaProdAseo.push_back(objAseo);

        ui->codigo->setText("");
        ui->nombre->setText("");
        ui->numUnidadades->setText("");
        ui->costoUnit->setText("");

    }

    if(categoria=="Canasta Basica"){

        CanastaBasic * objBasica = new CanastaBasic(codigo, nombre, numUnidades, costoUnit);

        listaProdBasic.push_back(objBasica);

        ui->codigo->setText("");
        ui->nombre->setText("");
        ui->numUnidadades->setText("");
        ui->costoUnit->setText("");
    }
}


void Ventana::on_Listar_clicked()
{
    QString salida = "Codigo\tNombre\tCategoria\tNum Unidades\tCostoUnit\tSubtotal\tIVA\tTotal\n\n";
    for(int i=0; i<(int)listaProdGeneral.size(); i++){
        salida+=listaProdGeneral[i]->getCodigo();
        salida+=" \t";
        salida+=listaProdGeneral[i]->getNombre();
        salida+=" \t";
        salida+= listaProdGeneral[i]->getClass();
        salida+=" \t";
        salida+=QString::number(listaProdGeneral[i]->getNumUnidades());
        salida+=" \t";
        salida+=" \t";
        salida+=QString::number(listaProdGeneral[i]->getCostoUnit());
        salida+=" \t";
        salida+=QString::number(listaProdGeneral[i]->subtotal());
        salida+=" \t";
        salida+=QString::number(listaProdGeneral[i]->IVA());
        salida+=" \t";
        salida+=QString::number(listaProdGeneral[i]->total());
        salida+=" \n";


    }
    for(int i=0; i<(int)listaProdAseo.size(); i++){
        salida+=listaProdAseo[i]->getCodigo();
        salida+="\t";
        salida+=listaProdAseo[i]->getNombre();
        salida+="\t";
        salida+=listaProdAseo[i]->getClass();
        salida+="\t";
        salida+=QString::number(listaProdAseo[i]->getNumUnidades());
        salida+="\t";
        salida+="\t";
        salida+=QString::number(listaProdAseo[i]->getCostoUnit());
        salida+="\t";
        salida+=QString::number(listaProdAseo[i]->subtotal());
        salida+="\t";
        salida+=QString::number(listaProdAseo[i]->IVA());
        salida+="\t";
        salida+=QString::number(listaProdAseo[i]->total());
        salida+="\n";


    }
    for(int i=0; i<(int)listaProdBasic.size(); i++){
        salida+=listaProdBasic[i]->getCodigo();
        salida+="\t";
        salida+=listaProdBasic[i]->getNombre();
        salida+="\t";
        salida+=listaProdBasic[i]->getClass();
        salida+="\t";
        salida+=QString::number(listaProdBasic[i]->getNumUnidades());
        salida+="\t";
        salida+="\t";
        salida+=QString::number(listaProdBasic[i]->getCostoUnit());
        salida+="\t";
        salida+=QString::number(listaProdBasic[i]->subtotal());
        salida+="\t";
        salida+=QString::number(listaProdBasic[i]->IVA());
        salida+="\t";
        salida+=QString::number(listaProdBasic[i]->total());
        salida+="\n";


    }


    ui->Salida->setText(salida);
}


void Ventana::on_categoria_activated(const QString &arg1)
{

}
