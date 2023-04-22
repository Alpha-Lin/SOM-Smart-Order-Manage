/********************************************************************************
** Form generated from reading UI file 'chauffeur.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAUFFEUR_H
#define UI_CHAUFFEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Chauffeur
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Chauffeur)
    {
        if (Chauffeur->objectName().isEmpty())
            Chauffeur->setObjectName("Chauffeur");
        Chauffeur->resize(400, 300);
        buttonBox = new QDialogButtonBox(Chauffeur);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Chauffeur);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Chauffeur, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Chauffeur, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Chauffeur);
    } // setupUi

    void retranslateUi(QDialog *Chauffeur)
    {
        Chauffeur->setWindowTitle(QCoreApplication::translate("Chauffeur", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chauffeur: public Ui_Chauffeur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAUFFEUR_H
