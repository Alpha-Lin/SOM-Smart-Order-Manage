/********************************************************************************
** Form generated from reading UI file 'dispatchwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPATCHWINDOW_H
#define UI_DISPATCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_DispatchWindow
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DispatchWindow)
    {
        if (DispatchWindow->objectName().isEmpty())
            DispatchWindow->setObjectName("DispatchWindow");
        DispatchWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(DispatchWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DispatchWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DispatchWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DispatchWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DispatchWindow);
    } // setupUi

    void retranslateUi(QDialog *DispatchWindow)
    {
        DispatchWindow->setWindowTitle(QCoreApplication::translate("DispatchWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DispatchWindow: public Ui_DispatchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPATCHWINDOW_H
