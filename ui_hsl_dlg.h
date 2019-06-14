/********************************************************************************
** Form generated from reading UI file 'hsl_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HSL_DLG_H
#define UI_HSL_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HSL_dlg
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *hue;
    QSlider *hue_slider;
    QSpinBox *hue_spin;
    QSlider *saturation_slider;
    QLabel *luminance;
    QSlider *luminance_slider;
    QLabel *saturation;
    QDialogButtonBox *buttonBox;
    QSpinBox *luminance_spin;
    QSpinBox *saturation_spin;

    void setupUi(QDialog *HSL_dlg)
    {
        if (HSL_dlg->objectName().isEmpty())
            HSL_dlg->setObjectName(QString::fromUtf8("HSL_dlg"));
        HSL_dlg->resize(280, 232);
        widget = new QWidget(HSL_dlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 261, 211));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        hue = new QLabel(widget);
        hue->setObjectName(QString::fromUtf8("hue"));

        gridLayout->addWidget(hue, 0, 0, 1, 1);

        hue_slider = new QSlider(widget);
        hue_slider->setObjectName(QString::fromUtf8("hue_slider"));
        hue_slider->setMinimum(-100);
        hue_slider->setMaximum(100);
        hue_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hue_slider, 1, 0, 1, 2);

        hue_spin = new QSpinBox(widget);
        hue_spin->setObjectName(QString::fromUtf8("hue_spin"));

        gridLayout->addWidget(hue_spin, 1, 2, 1, 1);

        saturation_slider = new QSlider(widget);
        saturation_slider->setObjectName(QString::fromUtf8("saturation_slider"));
        saturation_slider->setMinimum(-100);
        saturation_slider->setMaximum(100);
        saturation_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(saturation_slider, 3, 0, 1, 2);

        luminance = new QLabel(widget);
        luminance->setObjectName(QString::fromUtf8("luminance"));

        gridLayout->addWidget(luminance, 4, 0, 1, 1);

        luminance_slider = new QSlider(widget);
        luminance_slider->setObjectName(QString::fromUtf8("luminance_slider"));
        luminance_slider->setMinimum(-100);
        luminance_slider->setMaximum(100);
        luminance_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(luminance_slider, 5, 0, 1, 2);

        saturation = new QLabel(widget);
        saturation->setObjectName(QString::fromUtf8("saturation"));

        gridLayout->addWidget(saturation, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 1);

        luminance_spin = new QSpinBox(widget);
        luminance_spin->setObjectName(QString::fromUtf8("luminance_spin"));

        gridLayout->addWidget(luminance_spin, 5, 2, 1, 1);

        saturation_spin = new QSpinBox(widget);
        saturation_spin->setObjectName(QString::fromUtf8("saturation_spin"));

        gridLayout->addWidget(saturation_spin, 3, 2, 1, 1);


        retranslateUi(HSL_dlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), HSL_dlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HSL_dlg, SLOT(reject()));
        QObject::connect(hue_slider, SIGNAL(valueChanged(int)), hue_spin, SLOT(setValue(int)));
        QObject::connect(hue_spin, SIGNAL(valueChanged(int)), hue_slider, SLOT(setValue(int)));
        QObject::connect(saturation_slider, SIGNAL(valueChanged(int)), saturation_spin, SLOT(setValue(int)));
        QObject::connect(saturation_spin, SIGNAL(valueChanged(int)), saturation_slider, SLOT(setValue(int)));
        QObject::connect(luminance_slider, SIGNAL(valueChanged(int)), luminance_spin, SLOT(setValue(int)));
        QObject::connect(luminance_spin, SIGNAL(valueChanged(int)), luminance_slider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(HSL_dlg);
    } // setupUi

    void retranslateUi(QDialog *HSL_dlg)
    {
        HSL_dlg->setWindowTitle(QApplication::translate("HSL_dlg", "Dialog", nullptr));
        hue->setText(QApplication::translate("HSL_dlg", "Hue", nullptr));
        luminance->setText(QApplication::translate("HSL_dlg", "Luminance", nullptr));
        saturation->setText(QApplication::translate("HSL_dlg", "Saturation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HSL_dlg: public Ui_HSL_dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSL_DLG_H
