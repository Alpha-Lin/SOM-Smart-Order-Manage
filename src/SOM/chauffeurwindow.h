#ifndef CHAUFFEURWINDOW_H
#define CHAUFFEURWINDOW_H

#include <QDialog>

namespace Ui {
class ChauffeurWindow;
}

class ChauffeurWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChauffeurWindow(QWidget *parent = nullptr);
    ~ChauffeurWindow();

private:
    Ui::ChauffeurWindow *ui;
};

#endif // CHAUFFEURWINDOW_H
