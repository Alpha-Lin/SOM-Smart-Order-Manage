/********************************************************************************
** Form generated from reading UI file 'chauffeurwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAUFFEURWINDOW_H
#define UI_CHAUFFEURWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ChauffeurWindow
{
public:
    QTableView *tableView;

    void setupUi(QDialog *ChauffeurWindow)
    {
        if (ChauffeurWindow->objectName().isEmpty())
            ChauffeurWindow->setObjectName("ChauffeurWindow");
        ChauffeurWindow->resize(839, 558);
        tableView = new QTableView(ChauffeurWindow);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(310, 180, 256, 192));

        retranslateUi(ChauffeurWindow);

        QMetaObject::connectSlotsByName(ChauffeurWindow);
    } // setupUi

    void retranslateUi(QDialog *ChauffeurWindow)
    {
        ChauffeurWindow->setWindowTitle(QCoreApplication::translate("ChauffeurWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChauffeurWindow: public Ui_ChauffeurWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAUFFEURWINDOW_H
