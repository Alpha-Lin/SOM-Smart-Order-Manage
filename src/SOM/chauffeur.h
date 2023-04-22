#ifndef CHAUFFEUR_H
#define CHAUFFEUR_H

#include <QDialog>

namespace Ui {
class Chauffeur;
}

class Chauffeur : public QDialog
{
    Q_OBJECT

public:
    explicit Chauffeur(QWidget *parent = nullptr);
    ~Chauffeur();

private:
    Ui::Chauffeur *ui;
};

#endif // CHAUFFEUR_H
