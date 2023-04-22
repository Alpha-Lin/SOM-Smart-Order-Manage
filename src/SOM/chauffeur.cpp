#include "chauffeur.h"
#include "ui_chauffeur.h"

Chauffeur::Chauffeur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chauffeur)
{
    ui->setupUi(this);
}

Chauffeur::~Chauffeur()
{
    delete ui;
}
