/********************************************************************************
** Form generated from reading UI file 'geometrical_process.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOMETRICAL_PROCESS_H
#define UI_GEOMETRICAL_PROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Geometrical_process
{
public:
    QPushButton *flip_V_btn;
    QPushButton *flip_H_btn;
    QPushButton *cropping_btn;
    QSlider *rotate_slider;
    QSlider *scaling_slider;
    QSlider *skewing_y_slider;
    QSlider *skewing_x_slider;
    QPushButton *apply_btn;

    void setupUi(QDialog *Geometrical_process)
    {
        if (Geometrical_process->objectName().isEmpty())
            Geometrical_process->setObjectName(QString::fromUtf8("Geometrical_process"));
        Geometrical_process->resize(400, 300);
        flip_V_btn = new QPushButton(Geometrical_process);
        flip_V_btn->setObjectName(QString::fromUtf8("flip_V_btn"));
        flip_V_btn->setGeometry(QRect(40, 210, 80, 24));
        flip_H_btn = new QPushButton(Geometrical_process);
        flip_H_btn->setObjectName(QString::fromUtf8("flip_H_btn"));
        flip_H_btn->setGeometry(QRect(260, 210, 80, 24));
        cropping_btn = new QPushButton(Geometrical_process);
        cropping_btn->setObjectName(QString::fromUtf8("cropping_btn"));
        cropping_btn->setGeometry(QRect(150, 250, 80, 24));
        rotate_slider = new QSlider(Geometrical_process);
        rotate_slider->setObjectName(QString::fromUtf8("rotate_slider"));
        rotate_slider->setGeometry(QRect(110, 20, 160, 16));
        rotate_slider->setMinimum(-180);
        rotate_slider->setMaximum(180);
        rotate_slider->setOrientation(Qt::Horizontal);
        scaling_slider = new QSlider(Geometrical_process);
        scaling_slider->setObjectName(QString::fromUtf8("scaling_slider"));
        scaling_slider->setGeometry(QRect(110, 60, 160, 16));
        scaling_slider->setOrientation(Qt::Horizontal);
        skewing_y_slider = new QSlider(Geometrical_process);
        skewing_y_slider->setObjectName(QString::fromUtf8("skewing_y_slider"));
        skewing_y_slider->setGeometry(QRect(20, 150, 160, 16));
        skewing_y_slider->setOrientation(Qt::Horizontal);
        skewing_x_slider = new QSlider(Geometrical_process);
        skewing_x_slider->setObjectName(QString::fromUtf8("skewing_x_slider"));
        skewing_x_slider->setGeometry(QRect(220, 150, 160, 16));
        skewing_x_slider->setOrientation(Qt::Horizontal);
        apply_btn = new QPushButton(Geometrical_process);
        apply_btn->setObjectName(QString::fromUtf8("apply_btn"));
        apply_btn->setGeometry(QRect(280, 260, 80, 24));

        retranslateUi(Geometrical_process);

        QMetaObject::connectSlotsByName(Geometrical_process);
    } // setupUi

    void retranslateUi(QDialog *Geometrical_process)
    {
        Geometrical_process->setWindowTitle(QApplication::translate("Geometrical_process", "Dialog", nullptr));
        flip_V_btn->setText(QApplication::translate("Geometrical_process", "Flip Vert", nullptr));
        flip_H_btn->setText(QApplication::translate("Geometrical_process", "Flip Horiz", nullptr));
        cropping_btn->setText(QApplication::translate("Geometrical_process", "Cropping", nullptr));
        apply_btn->setText(QApplication::translate("Geometrical_process", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Geometrical_process: public Ui_Geometrical_process {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOMETRICAL_PROCESS_H
