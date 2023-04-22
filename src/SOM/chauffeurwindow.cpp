#include "chauffeurwindow.h"
#include "ui_chauffeurwindow.h"

ChauffeurWindow::ChauffeurWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChauffeurWindow)
{
    ui->setupUi(this);
}

ChauffeurWindow::~ChauffeurWindow()
{
    delete ui;
}
