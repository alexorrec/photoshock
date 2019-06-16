/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *img_lbl;
    QTabWidget *tabWidget;
    QWidget *Editing;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QSlider *exposure_slider;
    QLabel *textGreen;
    QSlider *contrast_slider;
    QSpinBox *exposure_spin;
    QSpinBox *blue_spin;
    QSlider *green_slider;
    QSpinBox *red_spin;
    QSlider *luminance_slider;
    QSlider *blue_slider;
    QSpinBox *luminance_spin;
    QLabel *textWb;
    QLabel *label_6;
    QSpinBox *saturation_spin;
    QSpinBox *contrast_spin;
    QPushButton *ok_btn;
    QSlider *saturation_slider;
    QLabel *textBlue;
    QLabel *textContrast;
    QPushButton *hsl_btn;
    QSlider *hue_slider;
    QSpinBox *hue_spin;
    QSpacerItem *verticalSpacer;
    QSlider *red_slider;
    QLabel *textRed;
    QLabel *label_2;
    QSpinBox *green_spin;
    QLabel *label_3;
    QLabel *textExposure;
    QWidget *Kernel;
    QLabel *label_4;
    QSlider *horizontalSlider_2;
    QLabel *label_5;
    QSlider *gaussian_slider;
    QPushButton *black_and_white;
    QPushButton *sepia_btn;
    QWidget *Distortions;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QSpinBox *spinBox_4;
    QSlider *rotate_slider;
    QSpinBox *spinBox_5;
    QLabel *label_9;
    QLabel *label_8;
    QSlider *scale_slider;
    QGridLayout *gridLayout_4;
    QPushButton *flipH_btn;
    QPushButton *flipV_btn;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QWidget *layoutWidget1;
    QHBoxLayout *top_layout;
    QPushButton *open_btn;
    QPushButton *save_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *reset_btn;
    QWidget *layoutWidget2;
    QHBoxLayout *ignore;
    QLabel *textZoom;
    QSlider *zoom_slider;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLabel *r_hist;
    QLabel *g_hist;
    QLabel *b_hist;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1059, 742);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        img_lbl = new QLabel(centralWidget);
        img_lbl->setObjectName(QString::fromUtf8("img_lbl"));
        img_lbl->setGeometry(QRect(9, 29, 731, 641));
        img_lbl->setAutoFillBackground(true);
        img_lbl->setText(QString::fromUtf8("<html><head/><body><p><br/></p></body></html>"));
        img_lbl->setScaledContents(false);
        img_lbl->setAlignment(Qt::AlignCenter);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(750, 220, 301, 481));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        Editing = new QWidget();
        Editing->setObjectName(QString::fromUtf8("Editing"));
        gridLayout_3 = new QGridLayout(Editing);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        exposure_slider = new QSlider(Editing);
        exposure_slider->setObjectName(QString::fromUtf8("exposure_slider"));
        exposure_slider->setEnabled(false);
        exposure_slider->setMinimum(-100);
        exposure_slider->setMaximum(100);
        exposure_slider->setOrientation(Qt::Horizontal);
        exposure_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(exposure_slider, 8, 0, 1, 1);

        textGreen = new QLabel(Editing);
        textGreen->setObjectName(QString::fromUtf8("textGreen"));

        gridLayout->addWidget(textGreen, 3, 0, 1, 1);

        contrast_slider = new QSlider(Editing);
        contrast_slider->setObjectName(QString::fromUtf8("contrast_slider"));
        contrast_slider->setEnabled(false);
        contrast_slider->setMinimum(-100);
        contrast_slider->setMaximum(100);
        contrast_slider->setValue(0);
        contrast_slider->setOrientation(Qt::Horizontal);
        contrast_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(contrast_slider, 10, 0, 1, 1);

        exposure_spin = new QSpinBox(Editing);
        exposure_spin->setObjectName(QString::fromUtf8("exposure_spin"));
        exposure_spin->setEnabled(false);
        exposure_spin->setMinimum(-100);
        exposure_spin->setMaximum(100);

        gridLayout->addWidget(exposure_spin, 8, 1, 1, 1);

        blue_spin = new QSpinBox(Editing);
        blue_spin->setObjectName(QString::fromUtf8("blue_spin"));
        blue_spin->setEnabled(false);
        blue_spin->setMinimum(-100);
        blue_spin->setMaximum(100);

        gridLayout->addWidget(blue_spin, 6, 1, 1, 1);

        green_slider = new QSlider(Editing);
        green_slider->setObjectName(QString::fromUtf8("green_slider"));
        green_slider->setEnabled(false);
        green_slider->setMinimum(-100);
        green_slider->setMaximum(100);
        green_slider->setOrientation(Qt::Horizontal);
        green_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(green_slider, 4, 0, 1, 1);

        red_spin = new QSpinBox(Editing);
        red_spin->setObjectName(QString::fromUtf8("red_spin"));
        red_spin->setEnabled(false);
        red_spin->setMinimum(-100);
        red_spin->setMaximum(100);

        gridLayout->addWidget(red_spin, 2, 1, 1, 1);

        luminance_slider = new QSlider(Editing);
        luminance_slider->setObjectName(QString::fromUtf8("luminance_slider"));
        luminance_slider->setEnabled(false);
        luminance_slider->setMinimum(-100);
        luminance_slider->setMaximum(100);
        luminance_slider->setOrientation(Qt::Horizontal);
        luminance_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(luminance_slider, 18, 0, 1, 1);

        blue_slider = new QSlider(Editing);
        blue_slider->setObjectName(QString::fromUtf8("blue_slider"));
        blue_slider->setEnabled(false);
        blue_slider->setMinimum(-100);
        blue_slider->setMaximum(100);
        blue_slider->setOrientation(Qt::Horizontal);
        blue_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(blue_slider, 6, 0, 1, 1);

        luminance_spin = new QSpinBox(Editing);
        luminance_spin->setObjectName(QString::fromUtf8("luminance_spin"));
        luminance_spin->setEnabled(false);

        gridLayout->addWidget(luminance_spin, 18, 1, 1, 1);

        textWb = new QLabel(Editing);
        textWb->setObjectName(QString::fromUtf8("textWb"));

        gridLayout->addWidget(textWb, 0, 0, 1, 1);

        label_6 = new QLabel(Editing);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 17, 0, 1, 1);

        saturation_spin = new QSpinBox(Editing);
        saturation_spin->setObjectName(QString::fromUtf8("saturation_spin"));
        saturation_spin->setEnabled(false);

        gridLayout->addWidget(saturation_spin, 16, 1, 1, 1);

        contrast_spin = new QSpinBox(Editing);
        contrast_spin->setObjectName(QString::fromUtf8("contrast_spin"));
        contrast_spin->setEnabled(false);
        contrast_spin->setMinimum(-100);
        contrast_spin->setMaximum(100);

        gridLayout->addWidget(contrast_spin, 10, 1, 1, 1);

        ok_btn = new QPushButton(Editing);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));
        ok_btn->setEnabled(false);

        gridLayout->addWidget(ok_btn, 12, 1, 1, 1);

        saturation_slider = new QSlider(Editing);
        saturation_slider->setObjectName(QString::fromUtf8("saturation_slider"));
        saturation_slider->setEnabled(false);
        saturation_slider->setMinimum(-100);
        saturation_slider->setMaximum(100);
        saturation_slider->setOrientation(Qt::Horizontal);
        saturation_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(saturation_slider, 16, 0, 1, 1);

        textBlue = new QLabel(Editing);
        textBlue->setObjectName(QString::fromUtf8("textBlue"));

        gridLayout->addWidget(textBlue, 5, 0, 1, 1);

        textContrast = new QLabel(Editing);
        textContrast->setObjectName(QString::fromUtf8("textContrast"));

        gridLayout->addWidget(textContrast, 9, 0, 1, 1);

        hsl_btn = new QPushButton(Editing);
        hsl_btn->setObjectName(QString::fromUtf8("hsl_btn"));
        hsl_btn->setEnabled(false);

        gridLayout->addWidget(hsl_btn, 12, 0, 1, 1);

        hue_slider = new QSlider(Editing);
        hue_slider->setObjectName(QString::fromUtf8("hue_slider"));
        hue_slider->setEnabled(false);
        hue_slider->setMinimum(-100);
        hue_slider->setMaximum(100);
        hue_slider->setOrientation(Qt::Horizontal);
        hue_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(hue_slider, 14, 0, 1, 1);

        hue_spin = new QSpinBox(Editing);
        hue_spin->setObjectName(QString::fromUtf8("hue_spin"));
        hue_spin->setEnabled(false);

        gridLayout->addWidget(hue_spin, 14, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);

        red_slider = new QSlider(Editing);
        red_slider->setObjectName(QString::fromUtf8("red_slider"));
        red_slider->setEnabled(false);
        red_slider->setMinimum(-100);
        red_slider->setMaximum(100);
        red_slider->setOrientation(Qt::Horizontal);
        red_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(red_slider, 2, 0, 1, 1);

        textRed = new QLabel(Editing);
        textRed->setObjectName(QString::fromUtf8("textRed"));

        gridLayout->addWidget(textRed, 1, 0, 1, 1);

        label_2 = new QLabel(Editing);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 13, 0, 1, 1);

        green_spin = new QSpinBox(Editing);
        green_spin->setObjectName(QString::fromUtf8("green_spin"));
        green_spin->setEnabled(false);
        green_spin->setMinimum(-100);
        green_spin->setMaximum(100);

        gridLayout->addWidget(green_spin, 4, 1, 1, 1);

        label_3 = new QLabel(Editing);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 15, 0, 1, 1);

        textExposure = new QLabel(Editing);
        textExposure->setObjectName(QString::fromUtf8("textExposure"));

        gridLayout->addWidget(textExposure, 7, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(Editing, QString());
        Kernel = new QWidget();
        Kernel->setObjectName(QString::fromUtf8("Kernel"));
        label_4 = new QLabel(Kernel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(11, 11, 56, 16));
        horizontalSlider_2 = new QSlider(Kernel);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(11, 58, 84, 16));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(Kernel);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(11, 79, 63, 16));
        gaussian_slider = new QSlider(Kernel);
        gaussian_slider->setObjectName(QString::fromUtf8("gaussian_slider"));
        gaussian_slider->setGeometry(QRect(11, 125, 84, 16));
        gaussian_slider->setOrientation(Qt::Horizontal);
        black_and_white = new QPushButton(Kernel);
        black_and_white->setObjectName(QString::fromUtf8("black_and_white"));
        black_and_white->setGeometry(QRect(140, 340, 80, 24));
        sepia_btn = new QPushButton(Kernel);
        sepia_btn->setObjectName(QString::fromUtf8("sepia_btn"));
        sepia_btn->setGeometry(QRect(30, 340, 80, 24));
        tabWidget->addTab(Kernel, QString());
        Distortions = new QWidget();
        Distortions->setObjectName(QString::fromUtf8("Distortions"));
        layoutWidget = new QWidget(Distortions);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 281, 251));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        spinBox_4 = new QSpinBox(layoutWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimum(-180);
        spinBox_4->setMaximum(180);

        gridLayout_2->addWidget(spinBox_4, 2, 1, 1, 1);

        rotate_slider = new QSlider(layoutWidget);
        rotate_slider->setObjectName(QString::fromUtf8("rotate_slider"));
        rotate_slider->setMinimum(-180);
        rotate_slider->setMaximum(180);
        rotate_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(rotate_slider, 2, 0, 1, 1);

        spinBox_5 = new QSpinBox(layoutWidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMinimum(-180);
        spinBox_5->setMaximum(180);

        gridLayout_2->addWidget(spinBox_5, 4, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        scale_slider = new QSlider(layoutWidget);
        scale_slider->setObjectName(QString::fromUtf8("scale_slider"));
        scale_slider->setMinimum(-180);
        scale_slider->setMaximum(180);
        scale_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(scale_slider, 4, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        flipH_btn = new QPushButton(layoutWidget);
        flipH_btn->setObjectName(QString::fromUtf8("flipH_btn"));

        gridLayout_4->addWidget(flipH_btn, 0, 0, 1, 1);

        flipV_btn = new QPushButton(layoutWidget);
        flipV_btn->setObjectName(QString::fromUtf8("flipV_btn"));

        gridLayout_4->addWidget(flipV_btn, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 2, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_5->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_5->addWidget(pushButton_4, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 4, 0, 1, 1);

        tabWidget->addTab(Distortions, QString());
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 371, 26));
        top_layout = new QHBoxLayout(layoutWidget1);
        top_layout->setSpacing(6);
        top_layout->setContentsMargins(11, 11, 11, 11);
        top_layout->setObjectName(QString::fromUtf8("top_layout"));
        top_layout->setContentsMargins(0, 0, 0, 0);
        open_btn = new QPushButton(layoutWidget1);
        open_btn->setObjectName(QString::fromUtf8("open_btn"));
        open_btn->setMinimumSize(QSize(80, 24));

        top_layout->addWidget(open_btn);

        save_btn = new QPushButton(layoutWidget1);
        save_btn->setObjectName(QString::fromUtf8("save_btn"));
        save_btn->setEnabled(false);

        top_layout->addWidget(save_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        top_layout->addItem(horizontalSpacer);

        reset_btn = new QPushButton(layoutWidget1);
        reset_btn->setObjectName(QString::fromUtf8("reset_btn"));
        reset_btn->setEnabled(false);

        top_layout->addWidget(reset_btn);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(570, 0, 171, 30));
        ignore = new QHBoxLayout(layoutWidget2);
        ignore->setSpacing(6);
        ignore->setContentsMargins(11, 11, 11, 11);
        ignore->setObjectName(QString::fromUtf8("ignore"));
        ignore->setContentsMargins(0, 0, 0, 0);
        textZoom = new QLabel(layoutWidget2);
        textZoom->setObjectName(QString::fromUtf8("textZoom"));

        ignore->addWidget(textZoom);

        zoom_slider = new QSlider(layoutWidget2);
        zoom_slider->setObjectName(QString::fromUtf8("zoom_slider"));
        zoom_slider->setMinimum(-180);
        zoom_slider->setMaximum(180);
        zoom_slider->setOrientation(Qt::Horizontal);

        ignore->addWidget(zoom_slider);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(750, 0, 301, 221));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        r_hist = new QLabel(layoutWidget3);
        r_hist->setObjectName(QString::fromUtf8("r_hist"));

        verticalLayout->addWidget(r_hist);

        g_hist = new QLabel(layoutWidget3);
        g_hist->setObjectName(QString::fromUtf8("g_hist"));

        verticalLayout->addWidget(g_hist);

        b_hist = new QLabel(layoutWidget3);
        b_hist->setObjectName(QString::fromUtf8("b_hist"));

        verticalLayout->addWidget(b_hist);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(red_slider, SIGNAL(valueChanged(int)), red_spin, SLOT(setValue(int)));
        QObject::connect(green_slider, SIGNAL(valueChanged(int)), green_spin, SLOT(setValue(int)));
        QObject::connect(blue_slider, SIGNAL(valueChanged(int)), blue_spin, SLOT(setValue(int)));
        QObject::connect(exposure_slider, SIGNAL(valueChanged(int)), exposure_spin, SLOT(setValue(int)));
        QObject::connect(contrast_slider, SIGNAL(valueChanged(int)), contrast_spin, SLOT(setValue(int)));
        QObject::connect(red_spin, SIGNAL(valueChanged(int)), red_slider, SLOT(setValue(int)));
        QObject::connect(green_spin, SIGNAL(valueChanged(int)), green_slider, SLOT(setValue(int)));
        QObject::connect(blue_spin, SIGNAL(valueChanged(int)), blue_slider, SLOT(setValue(int)));
        QObject::connect(exposure_spin, SIGNAL(valueChanged(int)), exposure_slider, SLOT(setValue(int)));
        QObject::connect(contrast_spin, SIGNAL(valueChanged(int)), contrast_slider, SLOT(setValue(int)));
        QObject::connect(hue_slider, SIGNAL(valueChanged(int)), hue_spin, SLOT(setValue(int)));
        QObject::connect(saturation_slider, SIGNAL(valueChanged(int)), saturation_spin, SLOT(setValue(int)));
        QObject::connect(luminance_slider, SIGNAL(valueChanged(int)), luminance_spin, SLOT(setValue(int)));
        QObject::connect(hue_spin, SIGNAL(valueChanged(int)), hue_slider, SLOT(setValue(int)));
        QObject::connect(saturation_spin, SIGNAL(valueChanged(int)), saturation_slider, SLOT(setValue(int)));
        QObject::connect(luminance_spin, SIGNAL(valueChanged(int)), luminance_slider, SLOT(setValue(int)));
        QObject::connect(rotate_slider, SIGNAL(valueChanged(int)), spinBox_4, SLOT(setValue(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), rotate_slider, SLOT(setValue(int)));
        QObject::connect(scale_slider, SIGNAL(valueChanged(int)), spinBox_5, SLOT(setValue(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), scale_slider, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        textGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
        textWb->setText(QApplication::translate("MainWindow", "WhiteBalance:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Luminance", nullptr));
        ok_btn->setText(QApplication::translate("MainWindow", "Ok", nullptr));
        textBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        textContrast->setText(QApplication::translate("MainWindow", "Contrast", nullptr));
        hsl_btn->setText(QApplication::translate("MainWindow", "Active HSL", nullptr));
        textRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Hue", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Saturation", nullptr));
        textExposure->setText(QApplication::translate("MainWindow", "Exposure", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Editing), QApplication::translate("MainWindow", "Editing", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Gaussian", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Sharpener", nullptr));
        black_and_white->setText(QApplication::translate("MainWindow", "B % W", nullptr));
        sepia_btn->setText(QApplication::translate("MainWindow", "Sepia", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Kernel), QApplication::translate("MainWindow", "Kernel", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Rotate", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Distortions:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Scale", nullptr));
        flipH_btn->setText(QApplication::translate("MainWindow", "Flip Horizontal", nullptr));
        flipV_btn->setText(QApplication::translate("MainWindow", "Flip Vertical", nullptr));
        label->setText(QApplication::translate("MainWindow", "Translate Axis", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Y", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "X", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Distortions), QApplication::translate("MainWindow", "Distortions", nullptr));
        open_btn->setText(QApplication::translate("MainWindow", "Open", nullptr));
        save_btn->setText(QApplication::translate("MainWindow", "Save", nullptr));
        reset_btn->setText(QApplication::translate("MainWindow", "Revert all changes", nullptr));
        textZoom->setText(QApplication::translate("MainWindow", "Zoom:", nullptr));
        r_hist->setText(QApplication::translate("MainWindow", "R", nullptr));
        g_hist->setText(QApplication::translate("MainWindow", "G", nullptr));
        b_hist->setText(QApplication::translate("MainWindow", "B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
