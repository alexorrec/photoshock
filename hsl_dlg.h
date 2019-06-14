#ifndef HSL_DLG_H
#define HSL_DLG_H

#include <QDialog>
#include <mainwindow.h>
#include "imghandling.h"
#include "imgprocessing.h"

namespace Ui {
class HSL_dlg;
}

class HSL_dlg : public QDialog
{
    Q_OBJECT

public:
    explicit HSL_dlg(QWidget *parent = nullptr);
    ~HSL_dlg();

private slots:


    void on_hue_slider_actionTriggered(int action);

private:
    Ui::HSL_dlg *ui;

    MainWindow update;
    ImgHandling input;
    ImgProcessing process;

};

#endif // HSL_DLG_H
