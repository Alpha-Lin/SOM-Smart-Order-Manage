#ifndef DISPATCHWINDOW_H
#define DISPATCHWINDOW_H

#include <QDialog>

namespace Ui {
class DispatchWindow;
}

class DispatchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DispatchWindow(QWidget *parent = nullptr);
    ~DispatchWindow();

private:
    Ui::DispatchWindow *ui;
};

#endif // DISPATCHWINDOW_H
