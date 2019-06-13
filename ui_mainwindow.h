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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
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
    QVBoxLayout *verticalLayout;
    QLabel *textWb;
    QLabel *textRed;
    QSlider *red_slider;
    QLabel *textGreen;
    QSlider *green_slider;
    QLabel *textBlue;
    QSlider *blue_slider;
    QLabel *textExposure;
    QSlider *exposure_slider;
    QLabel *textContrast;
    QSlider *contrast_slider;
    QLabel *textSaturation;
    QSlider *saturation_slider;
    QPushButton *reset_brn;
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
        img_lbl->setGeometry(QRect(0, 30, 751, 571));
        img_lbl->setText(QString::fromUtf8("<html><head/><body><p><br/></p></body></html>"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(750, 0, 251, 601));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        Editing = new QWidget();
        Editing->setObjectName(QString::fromUtf8("Editing"));
        verticalLayout = new QVBoxLayout(Editing);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textWb = new QLabel(Editing);
        textWb->setObjectName(QString::fromUtf8("textWb"));

        verticalLayout->addWidget(textWb);

        textRed = new QLabel(Editing);
        textRed->setObjectName(QString::fromUtf8("textRed"));

        verticalLayout->addWidget(textRed, 0, Qt::AlignRight);

        red_slider = new QSlider(Editing);
        red_slider->setObjectName(QString::fromUtf8("red_slider"));
        red_slider->setMinimum(-100);
        red_slider->setMaximum(100);
        red_slider->setOrientation(Qt::Horizontal);
        red_slider->setTickPosition(QSlider::TicksAbove);

        verticalLayout->addWidget(red_slider);

        textGreen = new QLabel(Editing);
        textGreen->setObjectName(QString::fromUtf8("textGreen"));

        verticalLayout->addWidget(textGreen, 0, Qt::AlignRight);

        green_slider = new QSlider(Editing);
        green_slider->setObjectName(QString::fromUtf8("green_slider"));
        green_slider->setMinimum(-100);
        green_slider->setMaximum(100);
        green_slider->setOrientation(Qt::Horizontal);
        green_slider->setTickPosition(QSlider::TicksAbove);

        verticalLayout->addWidget(green_slider);

        textBlue = new QLabel(Editing);
        textBlue->setObjectName(QString::fromUtf8("textBlue"));

        verticalLayout->addWidget(textBlue, 0, Qt::AlignRight);

        blue_slider = new QSlider(Editing);
        blue_slider->setObjectName(QString::fromUtf8("blue_slider"));
        blue_slider->setMinimum(-100);
        blue_slider->setMaximum(100);
        blue_slider->setOrientation(Qt::Horizontal);
        blue_slider->setTickPosition(QSlider::TicksAbove);

        verticalLayout->addWidget(blue_slider);

        textExposure = new QLabel(Editing);
        textExposure->setObjectName(QString::fromUtf8("textExposure"));

        verticalLayout->addWidget(textExposure);

        exposure_slider = new QSlider(Editing);
        exposure_slider->setObjectName(QString::fromUtf8("exposure_slider"));
        exposure_slider->setMinimum(-100);
        exposure_slider->setMaximum(100);
        exposure_slider->setOrientation(Qt::Horizontal);
        exposure_slider->setTickPosition(QSlider::TicksAbove);

        verticalLayout->addWidget(exposure_slider);

        textContrast = new QLabel(Editing);
        textContrast->setObjectName(QString::fromUtf8("textContrast"));

        verticalLayout->addWidget(textContrast);

        contrast_slider = new QSlider(Editing);
        contrast_slider->setObjectName(QString::fromUtf8("contrast_slider"));
        contrast_slider->setMinimum(-100);
        contrast_slider->setMaximum(100);
        contrast_slider->setValue(0);
        contrast_slider->setOrientation(Qt::Horizontal);
        contrast_slider->setTickPosition(QSlider::TicksAbove);

        verticalLayout->addWidget(contrast_slider);

        textSaturation = new QLabel(Editing);
        textSaturation->setObjectName(QString::fromUtf8("textSaturation"));

        verticalLayout->addWidget(textSaturation);

        saturation_slider = new QSlider(Editing);
        saturation_slider->setObjectName(QString::fromUtf8("saturation_slider"));
        saturation_slider->setMinimum(-100);
        saturation_slider->setMaximum(100);
        saturation_slider->setOrientation(Qt::Horizontal);
        saturation_slider->setTickPosition(QSlider::TicksAbove);

        verticalLayout->addWidget(saturation_slider);

        reset_brn = new QPushButton(Editing);
        reset_brn->setObjectName(QString::fromUtf8("reset_brn"));

        verticalLayout->addWidget(reset_brn);

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
        layoutWidget1->setGeometry(QRect(10, 420, 221, 51));
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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        textWb->setText(QApplication::translate("MainWindow", "WhiteBalance:", nullptr));
        textRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        textGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
        textBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        textExposure->setText(QApplication::translate("MainWindow", "Exposure", nullptr));
        textContrast->setText(QApplication::translate("MainWindow", "Contrast", nullptr));
        textSaturation->setText(QApplication::translate("MainWindow", "Saturation", nullptr));
        reset_brn->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Editing), QApplication::translate("MainWindow", "Editing", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Gaussian", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Sharpener", nullptr));
        sepia_btn->setText(QApplication::translate("MainWindow", "Sepia", nullptr));
        grayscale_btn->setText(QApplication::translate("MainWindow", "GrayScale", nullptr));
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
