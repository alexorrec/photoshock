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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QLabel *textWb;
    QSpinBox *green_spin;
    QSpinBox *red_spin;
    QSlider *contrast_slider;
    QLabel *textGreen;
    QLabel *textRed;
    QSlider *red_slider;
    QSlider *green_slider;
    QSpinBox *contrast_spin;
    QLabel *textBlue;
    QSlider *blue_slider;
    QPushButton *HSL_btn;
    QSlider *exposure_slider;
    QLabel *textContrast;
    QSpinBox *eposure_spin;
    QSpacerItem *verticalSpacer;
    QLabel *textExposure;
    QPushButton *reset_btn;
    QSpinBox *blue_spin;
    QPushButton *pushButton;
    QWidget *Kernel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QSlider *horizontalSlider_2;
    QLabel *label_5;
    QSlider *gaussian_slider;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *sepia_btn;
    QPushButton *grayscale_btn;
    QPushButton *geometry_btn;
    QWidget *Paint;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *open_btn;
    QPushButton *save_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *new_btn;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textZoom;
    QSlider *zoom_slider;
    QMenuBar *menuBar;
    QMenu *menuZeroPane;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 663);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        img_lbl = new QLabel(centralWidget);
        img_lbl->setObjectName(QString::fromUtf8("img_lbl"));
        img_lbl->setGeometry(QRect(10, 30, 701, 571));
        img_lbl->setAutoFillBackground(true);
        img_lbl->setText(QString::fromUtf8("<html><head/><body><p><br/></p></body></html>"));
        img_lbl->setScaledContents(false);
        img_lbl->setAlignment(Qt::AlignCenter);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(750, 10, 231, 591));
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
        textWb = new QLabel(Editing);
        textWb->setObjectName(QString::fromUtf8("textWb"));

        gridLayout->addWidget(textWb, 0, 1, 1, 1);

        green_spin = new QSpinBox(Editing);
        green_spin->setObjectName(QString::fromUtf8("green_spin"));
        green_spin->setMinimum(-100);
        green_spin->setMaximum(100);

        gridLayout->addWidget(green_spin, 4, 2, 1, 1);

        red_spin = new QSpinBox(Editing);
        red_spin->setObjectName(QString::fromUtf8("red_spin"));
        red_spin->setMinimum(-100);
        red_spin->setMaximum(100);

        gridLayout->addWidget(red_spin, 2, 2, 1, 1);

        contrast_slider = new QSlider(Editing);
        contrast_slider->setObjectName(QString::fromUtf8("contrast_slider"));
        contrast_slider->setMinimum(-100);
        contrast_slider->setMaximum(100);
        contrast_slider->setValue(0);
        contrast_slider->setOrientation(Qt::Horizontal);
        contrast_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(contrast_slider, 10, 1, 1, 1);

        textGreen = new QLabel(Editing);
        textGreen->setObjectName(QString::fromUtf8("textGreen"));

        gridLayout->addWidget(textGreen, 3, 1, 1, 1);

        textRed = new QLabel(Editing);
        textRed->setObjectName(QString::fromUtf8("textRed"));

        gridLayout->addWidget(textRed, 1, 1, 1, 1);

        red_slider = new QSlider(Editing);
        red_slider->setObjectName(QString::fromUtf8("red_slider"));
        red_slider->setMinimum(-100);
        red_slider->setMaximum(100);
        red_slider->setOrientation(Qt::Horizontal);
        red_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(red_slider, 2, 1, 1, 1);

        green_slider = new QSlider(Editing);
        green_slider->setObjectName(QString::fromUtf8("green_slider"));
        green_slider->setMinimum(-100);
        green_slider->setMaximum(100);
        green_slider->setOrientation(Qt::Horizontal);
        green_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(green_slider, 4, 1, 1, 1);

        contrast_spin = new QSpinBox(Editing);
        contrast_spin->setObjectName(QString::fromUtf8("contrast_spin"));
        contrast_spin->setMinimum(-100);
        contrast_spin->setMaximum(100);

        gridLayout->addWidget(contrast_spin, 10, 2, 1, 1);

        textBlue = new QLabel(Editing);
        textBlue->setObjectName(QString::fromUtf8("textBlue"));

        gridLayout->addWidget(textBlue, 5, 1, 1, 1);

        blue_slider = new QSlider(Editing);
        blue_slider->setObjectName(QString::fromUtf8("blue_slider"));
        blue_slider->setMinimum(-100);
        blue_slider->setMaximum(100);
        blue_slider->setOrientation(Qt::Horizontal);
        blue_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(blue_slider, 6, 1, 1, 1);

        HSL_btn = new QPushButton(Editing);
        HSL_btn->setObjectName(QString::fromUtf8("HSL_btn"));

        gridLayout->addWidget(HSL_btn, 12, 1, 1, 2);

        exposure_slider = new QSlider(Editing);
        exposure_slider->setObjectName(QString::fromUtf8("exposure_slider"));
        exposure_slider->setMinimum(-100);
        exposure_slider->setMaximum(100);
        exposure_slider->setOrientation(Qt::Horizontal);
        exposure_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(exposure_slider, 8, 1, 1, 1);

        textContrast = new QLabel(Editing);
        textContrast->setObjectName(QString::fromUtf8("textContrast"));

        gridLayout->addWidget(textContrast, 9, 1, 1, 1);

        eposure_spin = new QSpinBox(Editing);
        eposure_spin->setObjectName(QString::fromUtf8("eposure_spin"));
        eposure_spin->setMinimum(-100);
        eposure_spin->setMaximum(100);

        gridLayout->addWidget(eposure_spin, 8, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 1, 1, 1);

        textExposure = new QLabel(Editing);
        textExposure->setObjectName(QString::fromUtf8("textExposure"));

        gridLayout->addWidget(textExposure, 7, 1, 1, 1);

        reset_btn = new QPushButton(Editing);
        reset_btn->setObjectName(QString::fromUtf8("reset_btn"));

        gridLayout->addWidget(reset_btn, 13, 1, 1, 2);

        blue_spin = new QSpinBox(Editing);
        blue_spin->setObjectName(QString::fromUtf8("blue_spin"));
        blue_spin->setMinimum(-100);
        blue_spin->setMaximum(100);

        gridLayout->addWidget(blue_spin, 6, 2, 2, 1);

        pushButton = new QPushButton(Editing);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 11, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(Editing, QString());
        Kernel = new QWidget();
        Kernel->setObjectName(QString::fromUtf8("Kernel"));
        layoutWidget = new QWidget(Kernel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 231, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5, 0, Qt::AlignLeft);

        gaussian_slider = new QSlider(layoutWidget);
        gaussian_slider->setObjectName(QString::fromUtf8("gaussian_slider"));
        gaussian_slider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(gaussian_slider);

        layoutWidget1 = new QWidget(Kernel);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 510, 221, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sepia_btn = new QPushButton(layoutWidget1);
        sepia_btn->setObjectName(QString::fromUtf8("sepia_btn"));

        horizontalLayout->addWidget(sepia_btn);

        grayscale_btn = new QPushButton(layoutWidget1);
        grayscale_btn->setObjectName(QString::fromUtf8("grayscale_btn"));

        horizontalLayout->addWidget(grayscale_btn);

        geometry_btn = new QPushButton(Kernel);
        geometry_btn->setObjectName(QString::fromUtf8("geometry_btn"));
        geometry_btn->setGeometry(QRect(70, 340, 80, 24));
        tabWidget->addTab(Kernel, QString());
        Paint = new QWidget();
        Paint->setObjectName(QString::fromUtf8("Paint"));
        tabWidget->addTab(Paint, QString());
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 331, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        open_btn = new QPushButton(layoutWidget2);
        open_btn->setObjectName(QString::fromUtf8("open_btn"));
        open_btn->setMinimumSize(QSize(80, 24));

        horizontalLayout_2->addWidget(open_btn);

        save_btn = new QPushButton(layoutWidget2);
        save_btn->setObjectName(QString::fromUtf8("save_btn"));

        horizontalLayout_2->addWidget(save_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        new_btn = new QPushButton(layoutWidget2);
        new_btn->setObjectName(QString::fromUtf8("new_btn"));

        horizontalLayout_2->addWidget(new_btn);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(570, 0, 171, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        textZoom = new QLabel(layoutWidget3);
        textZoom->setObjectName(QString::fromUtf8("textZoom"));

        horizontalLayout_3->addWidget(textZoom);

        zoom_slider = new QSlider(layoutWidget3);
        zoom_slider->setObjectName(QString::fromUtf8("zoom_slider"));
        zoom_slider->setMinimum(-180);
        zoom_slider->setMaximum(180);
        zoom_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(zoom_slider);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 22));
        menuZeroPane = new QMenu(menuBar);
        menuZeroPane->setObjectName(QString::fromUtf8("menuZeroPane"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuZeroPane->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(red_slider, SIGNAL(valueChanged(int)), red_spin, SLOT(setValue(int)));
        QObject::connect(green_slider, SIGNAL(valueChanged(int)), green_spin, SLOT(setValue(int)));
        QObject::connect(blue_slider, SIGNAL(valueChanged(int)), blue_spin, SLOT(setValue(int)));
        QObject::connect(exposure_slider, SIGNAL(valueChanged(int)), eposure_spin, SLOT(setValue(int)));
        QObject::connect(contrast_slider, SIGNAL(valueChanged(int)), contrast_spin, SLOT(setValue(int)));
        QObject::connect(red_spin, SIGNAL(valueChanged(int)), red_slider, SLOT(setValue(int)));
        QObject::connect(green_spin, SIGNAL(valueChanged(int)), green_slider, SLOT(setValue(int)));
        QObject::connect(blue_spin, SIGNAL(valueChanged(int)), blue_slider, SLOT(setValue(int)));
        QObject::connect(eposure_spin, SIGNAL(valueChanged(int)), exposure_slider, SLOT(setValue(int)));
        QObject::connect(contrast_spin, SIGNAL(valueChanged(int)), contrast_slider, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        textWb->setText(QApplication::translate("MainWindow", "WhiteBalance:", nullptr));
        textGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
        textRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        textBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        HSL_btn->setText(QApplication::translate("MainWindow", "HSL", nullptr));
        textContrast->setText(QApplication::translate("MainWindow", "Contrast", nullptr));
        textExposure->setText(QApplication::translate("MainWindow", "Exposure", nullptr));
        reset_btn->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Test", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Editing), QApplication::translate("MainWindow", "Editing", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Gaussian", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Sharpener", nullptr));
        sepia_btn->setText(QApplication::translate("MainWindow", "Sepia", nullptr));
        grayscale_btn->setText(QApplication::translate("MainWindow", "GrayScale", nullptr));
        geometry_btn->setText(QApplication::translate("MainWindow", "Geometry", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Kernel), QApplication::translate("MainWindow", "Kernel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Paint), QApplication::translate("MainWindow", "Paint", nullptr));
        open_btn->setText(QApplication::translate("MainWindow", "Open", nullptr));
        save_btn->setText(QApplication::translate("MainWindow", "Save", nullptr));
        new_btn->setText(QApplication::translate("MainWindow", "New", nullptr));
        textZoom->setText(QApplication::translate("MainWindow", "Zoom:", nullptr));
        menuZeroPane->setTitle(QApplication::translate("MainWindow", "ZeroPane", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
