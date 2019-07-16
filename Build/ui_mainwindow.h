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
#include <QtWidgets/QScrollArea>
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
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *open_btn;
    QPushButton *save_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *reset_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *undo_btn;
    QPushButton *redo_btn;
    QVBoxLayout *verticalLayout;
    QLabel *r_hist;
    QLabel *g_hist;
    QLabel *b_hist;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
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
    QLabel *textLuminance;
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
    QLabel *textHue;
    QSpinBox *green_spin;
    QLabel *saturation_lbl;
    QLabel *textExposure;
    QWidget *Filters;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer_2;
    QPushButton *sharp_btn;
    QPushButton *blur_btn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *steps_spin;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_8;
    QPushButton *sepia_btn;
    QPushButton *grayscale_btn;
    QWidget *Distortions;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_2;
    QSlider *rotate_slider;
    QLabel *label_7;
    QSpinBox *rotate_spin;
    QGridLayout *gridLayout_4;
    QPushButton *flipH_btn;
    QPushButton *flipV_btn;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1104, 743);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 881, 598));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        open_btn = new QPushButton(widget);
        open_btn->setObjectName(QString::fromUtf8("open_btn"));
        open_btn->setMinimumSize(QSize(80, 24));

        horizontalLayout->addWidget(open_btn);

        save_btn = new QPushButton(widget);
        save_btn->setObjectName(QString::fromUtf8("save_btn"));
        save_btn->setEnabled(false);

        horizontalLayout->addWidget(save_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        reset_btn = new QPushButton(widget);
        reset_btn->setObjectName(QString::fromUtf8("reset_btn"));
        reset_btn->setEnabled(false);

        horizontalLayout->addWidget(reset_btn);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        undo_btn = new QPushButton(widget);
        undo_btn->setObjectName(QString::fromUtf8("undo_btn"));
        undo_btn->setEnabled(false);

        horizontalLayout->addWidget(undo_btn);

        redo_btn = new QPushButton(widget);
        redo_btn->setObjectName(QString::fromUtf8("redo_btn"));
        redo_btn->setEnabled(false);

        horizontalLayout->addWidget(redo_btn);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        r_hist = new QLabel(widget);
        r_hist->setObjectName(QString::fromUtf8("r_hist"));

        verticalLayout->addWidget(r_hist);

        g_hist = new QLabel(widget);
        g_hist->setObjectName(QString::fromUtf8("g_hist"));

        verticalLayout->addWidget(g_hist);

        b_hist = new QLabel(widget);
        b_hist->setObjectName(QString::fromUtf8("b_hist"));

        verticalLayout->addWidget(b_hist);


        gridLayout_5->addLayout(verticalLayout, 0, 1, 2, 1);

        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 574, 560));
        img_lbl = new QLabel(scrollAreaWidgetContents);
        img_lbl->setObjectName(QString::fromUtf8("img_lbl"));
        img_lbl->setGeometry(QRect(10, 10, 781, 651));
        img_lbl->setAutoFillBackground(true);
        img_lbl->setText(QString::fromUtf8("<html><head/><body><p><br/></p></body></html>"));
        img_lbl->setScaledContents(false);
        img_lbl->setAlignment(Qt::AlignCenter);
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 1, 0, 2, 1);

        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
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
        luminance_spin->setMinimum(-100);
        luminance_spin->setMaximum(100);

        gridLayout->addWidget(luminance_spin, 18, 1, 1, 1);

        textWb = new QLabel(Editing);
        textWb->setObjectName(QString::fromUtf8("textWb"));

        gridLayout->addWidget(textWb, 0, 0, 1, 1);

        textLuminance = new QLabel(Editing);
        textLuminance->setObjectName(QString::fromUtf8("textLuminance"));

        gridLayout->addWidget(textLuminance, 17, 0, 1, 1);

        saturation_spin = new QSpinBox(Editing);
        saturation_spin->setObjectName(QString::fromUtf8("saturation_spin"));
        saturation_spin->setEnabled(false);
        saturation_spin->setMinimum(-100);
        saturation_spin->setMaximum(100);

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
        hue_spin->setMinimum(-100);
        hue_spin->setMaximum(100);

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

        textHue = new QLabel(Editing);
        textHue->setObjectName(QString::fromUtf8("textHue"));

        gridLayout->addWidget(textHue, 13, 0, 1, 1);

        green_spin = new QSpinBox(Editing);
        green_spin->setObjectName(QString::fromUtf8("green_spin"));
        green_spin->setEnabled(false);
        green_spin->setMinimum(-100);
        green_spin->setMaximum(100);

        gridLayout->addWidget(green_spin, 4, 1, 1, 1);

        saturation_lbl = new QLabel(Editing);
        saturation_lbl->setObjectName(QString::fromUtf8("saturation_lbl"));

        gridLayout->addWidget(saturation_lbl, 15, 0, 1, 1);

        textExposure = new QLabel(Editing);
        textExposure->setObjectName(QString::fromUtf8("textExposure"));

        gridLayout->addWidget(textExposure, 7, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(Editing, QString());
        Filters = new QWidget();
        Filters->setObjectName(QString::fromUtf8("Filters"));
        layoutWidget = new QWidget(Filters);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 281, 271));
        gridLayout_7 = new QGridLayout(layoutWidget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(48, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 3, 0, 1, 1);

        sharp_btn = new QPushButton(layoutWidget);
        sharp_btn->setObjectName(QString::fromUtf8("sharp_btn"));
        sharp_btn->setEnabled(false);

        gridLayout_7->addWidget(sharp_btn, 1, 0, 1, 1);

        blur_btn = new QPushButton(layoutWidget);
        blur_btn->setObjectName(QString::fromUtf8("blur_btn"));
        blur_btn->setEnabled(false);

        gridLayout_7->addWidget(blur_btn, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        steps_spin = new QSpinBox(layoutWidget);
        steps_spin->setObjectName(QString::fromUtf8("steps_spin"));
        steps_spin->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(steps_spin->sizePolicy().hasHeightForWidth());
        steps_spin->setSizePolicy(sizePolicy1);
        steps_spin->setMinimum(1);
        steps_spin->setMaximum(10);

        horizontalLayout_2->addWidget(steps_spin);


        gridLayout_7->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        layoutWidget1 = new QWidget(Filters);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 290, 281, 26));
        gridLayout_8 = new QGridLayout(layoutWidget1);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        sepia_btn = new QPushButton(layoutWidget1);
        sepia_btn->setObjectName(QString::fromUtf8("sepia_btn"));
        sepia_btn->setEnabled(false);

        gridLayout_8->addWidget(sepia_btn, 0, 0, 1, 1);

        grayscale_btn = new QPushButton(layoutWidget1);
        grayscale_btn->setObjectName(QString::fromUtf8("grayscale_btn"));
        grayscale_btn->setEnabled(false);

        gridLayout_8->addWidget(grayscale_btn, 0, 1, 1, 1);

        tabWidget->addTab(Filters, QString());
        Distortions = new QWidget();
        Distortions->setObjectName(QString::fromUtf8("Distortions"));
        layoutWidget2 = new QWidget(Distortions);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 11, 281, 151));
        gridLayout_6 = new QGridLayout(layoutWidget2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rotate_slider = new QSlider(layoutWidget2);
        rotate_slider->setObjectName(QString::fromUtf8("rotate_slider"));
        rotate_slider->setEnabled(false);
        rotate_slider->setMinimum(-180);
        rotate_slider->setMaximum(180);
        rotate_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(rotate_slider, 1, 0, 1, 1);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        rotate_spin = new QSpinBox(layoutWidget2);
        rotate_spin->setObjectName(QString::fromUtf8("rotate_spin"));
        rotate_spin->setEnabled(false);
        rotate_spin->setMinimum(-180);
        rotate_spin->setMaximum(180);

        gridLayout_2->addWidget(rotate_spin, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        flipH_btn = new QPushButton(layoutWidget2);
        flipH_btn->setObjectName(QString::fromUtf8("flipH_btn"));
        flipH_btn->setEnabled(false);

        gridLayout_4->addWidget(flipH_btn, 0, 0, 1, 1);

        flipV_btn = new QPushButton(layoutWidget2);
        flipV_btn->setObjectName(QString::fromUtf8("flipV_btn"));
        flipV_btn->setEnabled(false);

        gridLayout_4->addWidget(flipV_btn, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 1, 0, 1, 1);

        tabWidget->addTab(Distortions, QString());

        gridLayout_5->addWidget(tabWidget, 2, 1, 1, 1);

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
        QObject::connect(rotate_slider, SIGNAL(valueChanged(int)), rotate_spin, SLOT(setValue(int)));
        QObject::connect(rotate_spin, SIGNAL(valueChanged(int)), rotate_slider, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        open_btn->setText(QApplication::translate("MainWindow", "Open", nullptr));
        save_btn->setText(QApplication::translate("MainWindow", "Save", nullptr));
        reset_btn->setText(QApplication::translate("MainWindow", "Revert all changes", nullptr));
        undo_btn->setText(QApplication::translate("MainWindow", "<--", nullptr));
        redo_btn->setText(QApplication::translate("MainWindow", "-->", nullptr));
        r_hist->setText(QApplication::translate("MainWindow", "R", nullptr));
        g_hist->setText(QApplication::translate("MainWindow", "G", nullptr));
        b_hist->setText(QApplication::translate("MainWindow", "B", nullptr));
        textGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
        textWb->setText(QApplication::translate("MainWindow", "WhiteBalance:", nullptr));
        textLuminance->setText(QApplication::translate("MainWindow", "Luminance", nullptr));
        ok_btn->setText(QApplication::translate("MainWindow", "Ok", nullptr));
        textBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        textContrast->setText(QApplication::translate("MainWindow", "Contrast", nullptr));
        hsl_btn->setText(QApplication::translate("MainWindow", "Active HSL", nullptr));
        textRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        textHue->setText(QApplication::translate("MainWindow", "Hue", nullptr));
        saturation_lbl->setText(QApplication::translate("MainWindow", "Saturation", nullptr));
        textExposure->setText(QApplication::translate("MainWindow", "Exposure", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Editing), QApplication::translate("MainWindow", "Editing", nullptr));
        sharp_btn->setText(QApplication::translate("MainWindow", "Sharpener", nullptr));
        blur_btn->setText(QApplication::translate("MainWindow", "Gaussian Blur", nullptr));
        label->setText(QApplication::translate("MainWindow", "Filter Steps:", nullptr));
        sepia_btn->setText(QApplication::translate("MainWindow", "Sepia", nullptr));
        grayscale_btn->setText(QApplication::translate("MainWindow", "GrayScale", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Filters), QApplication::translate("MainWindow", "Kernel", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Rotate", nullptr));
        flipH_btn->setText(QApplication::translate("MainWindow", "Flip Horizontal", nullptr));
        flipV_btn->setText(QApplication::translate("MainWindow", "Flip Vertical", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Distortions), QApplication::translate("MainWindow", "Distortions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H