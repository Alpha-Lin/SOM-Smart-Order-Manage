#include "chauffeurwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../Personne.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonConnection, &QPushButton::clicked, this, &MainWindow::connexion);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connexion(){
    Personne* utilisateur = Personne::connexion(ui->lineEdit->text().toStdString(), ui->lineEdit_2->text().toStdString());

    if(utilisateur == NULL){
        ui->labelConnectionError->setText("Erreur de connexion");
        ui->lineEdit_2->setText("");
        return;
    }

    Personne::utilisateur = utilisateur;

    ChauffeurWindow *cw = new ChauffeurWindow();

    cw->show();

    hide();
}

