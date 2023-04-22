#include "dispatchwindow.h"
#include "ui_dispatchwindow.h"

DispatchWindow::DispatchWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DispatchWindow)
{
    ui->setupUi(this);
}

DispatchWindow::~DispatchWindow()
{
    delete ui;
}
