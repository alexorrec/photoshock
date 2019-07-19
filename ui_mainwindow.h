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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *open_btn;
    QPushButton *save_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *reset_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *undo_btn;
    QPushButton *redo_btn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *zoom_out_btn;
    QPushButton *zoom_in_btn;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_9;
    QGraphicsView *img_view;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *r_hist;
    QLabel *g_hist;
    QLabel *b_hist;
    QTabWidget *tabWidget;
    QWidget *Editing;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *textWb;
    QLabel *textRed;
    QSlider *red_slider;
    QSpinBox *red_spin;
    QLabel *textGreen;
    QSlider *green_slider;
    QSpinBox *green_spin;
    QLabel *textBlue;
    QSlider *blue_slider;
    QSpinBox *blue_spin;
    QLabel *textExposure;
    QSlider *exposure_slider;
    QSpinBox *exposure_spin;
    QLabel *textContrast;
    QSlider *contrast_slider;
    QSpinBox *contrast_spin;
    QSpacerItem *verticalSpacer;
    QPushButton *hsl_btn;
    QPushButton *ok_btn;
    QLabel *textHue;
    QSlider *hue_slider;
    QSpinBox *hue_spin;
    QLabel *saturation_lbl;
    QSlider *saturation_slider;
    QSpinBox *saturation_spin;
    QLabel *textLuminance;
    QSlider *luminance_slider;
    QSpinBox *luminance_spin;
    QWidget *tab;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_5;
    QPushButton *sepia_btn;
    QPushButton *grayscale_btn;
    QPushButton *blur_btn;
    QPushButton *sharp_btn;
    QSpinBox *steps_spin;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *Distortions;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QPushButton *flipH_btn;
    QPushButton *flipV_btn;
    QGridLayout *gridLayout_2;
    QSlider *rotate_slider;
    QLabel *label_7;
    QSpinBox *rotate_spin;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1077, 744);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout_10 = new QGridLayout(centralWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        open_btn = new QPushButton(centralWidget);
        open_btn->setObjectName(QString::fromUtf8("open_btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(open_btn->sizePolicy().hasHeightForWidth());
        open_btn->setSizePolicy(sizePolicy1);
        open_btn->setMinimumSize(QSize(80, 24));

        horizontalLayout->addWidget(open_btn);

        save_btn = new QPushButton(centralWidget);
        save_btn->setObjectName(QString::fromUtf8("save_btn"));
        save_btn->setEnabled(false);
        sizePolicy1.setHeightForWidth(save_btn->sizePolicy().hasHeightForWidth());
        save_btn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(save_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        reset_btn = new QPushButton(centralWidget);
        reset_btn->setObjectName(QString::fromUtf8("reset_btn"));
        reset_btn->setEnabled(false);
        sizePolicy1.setHeightForWidth(reset_btn->sizePolicy().hasHeightForWidth());
        reset_btn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(reset_btn);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        undo_btn = new QPushButton(centralWidget);
        undo_btn->setObjectName(QString::fromUtf8("undo_btn"));
        undo_btn->setEnabled(false);
        sizePolicy1.setHeightForWidth(undo_btn->sizePolicy().hasHeightForWidth());
        undo_btn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(undo_btn);

        redo_btn = new QPushButton(centralWidget);
        redo_btn->setObjectName(QString::fromUtf8("redo_btn"));
        redo_btn->setEnabled(false);
        sizePolicy1.setHeightForWidth(redo_btn->sizePolicy().hasHeightForWidth());
        redo_btn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(redo_btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        zoom_out_btn = new QPushButton(centralWidget);
        zoom_out_btn->setObjectName(QString::fromUtf8("zoom_out_btn"));
        zoom_out_btn->setEnabled(false);

        horizontalLayout->addWidget(zoom_out_btn);

        zoom_in_btn = new QPushButton(centralWidget);
        zoom_in_btn->setObjectName(QString::fromUtf8("zoom_in_btn"));
        zoom_in_btn->setEnabled(false);

        horizontalLayout->addWidget(zoom_in_btn);


        verticalLayout_2->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 746, 690));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        img_view = new QGraphicsView(scrollAreaWidgetContents);
        img_view->setObjectName(QString::fromUtf8("img_view"));
        img_view->setEnabled(false);

        gridLayout_9->addWidget(img_view, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        gridLayout_10->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        r_hist = new QLabel(centralWidget);
        r_hist->setObjectName(QString::fromUtf8("r_hist"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(r_hist->sizePolicy().hasHeightForWidth());
        r_hist->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(r_hist);

        g_hist = new QLabel(centralWidget);
        g_hist->setObjectName(QString::fromUtf8("g_hist"));
        sizePolicy2.setHeightForWidth(g_hist->sizePolicy().hasHeightForWidth());
        g_hist->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(g_hist);

        b_hist = new QLabel(centralWidget);
        b_hist->setObjectName(QString::fromUtf8("b_hist"));
        sizePolicy2.setHeightForWidth(b_hist->sizePolicy().hasHeightForWidth());
        b_hist->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(b_hist);


        verticalLayout_3->addLayout(verticalLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMinimumSize(QSize(301, 546));
        tabWidget->setMaximumSize(QSize(301, 546));
        Editing = new QWidget();
        Editing->setObjectName(QString::fromUtf8("Editing"));
        sizePolicy2.setHeightForWidth(Editing->sizePolicy().hasHeightForWidth());
        Editing->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(Editing);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textWb = new QLabel(Editing);
        textWb->setObjectName(QString::fromUtf8("textWb"));

        gridLayout->addWidget(textWb, 0, 0, 1, 1);

        textRed = new QLabel(Editing);
        textRed->setObjectName(QString::fromUtf8("textRed"));

        gridLayout->addWidget(textRed, 1, 0, 1, 1);

        red_slider = new QSlider(Editing);
        red_slider->setObjectName(QString::fromUtf8("red_slider"));
        red_slider->setEnabled(false);
        sizePolicy1.setHeightForWidth(red_slider->sizePolicy().hasHeightForWidth());
        red_slider->setSizePolicy(sizePolicy1);
        red_slider->setMinimum(-100);
        red_slider->setMaximum(100);
        red_slider->setOrientation(Qt::Horizontal);
        red_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(red_slider, 2, 0, 1, 1);

        red_spin = new QSpinBox(Editing);
        red_spin->setObjectName(QString::fromUtf8("red_spin"));
        red_spin->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(red_spin->sizePolicy().hasHeightForWidth());
        red_spin->setSizePolicy(sizePolicy3);
        red_spin->setMinimum(-100);
        red_spin->setMaximum(100);

        gridLayout->addWidget(red_spin, 2, 1, 1, 1);

        textGreen = new QLabel(Editing);
        textGreen->setObjectName(QString::fromUtf8("textGreen"));

        gridLayout->addWidget(textGreen, 3, 0, 1, 1);

        green_slider = new QSlider(Editing);
        green_slider->setObjectName(QString::fromUtf8("green_slider"));
        green_slider->setEnabled(false);
        sizePolicy1.setHeightForWidth(green_slider->sizePolicy().hasHeightForWidth());
        green_slider->setSizePolicy(sizePolicy1);
        green_slider->setMinimum(-100);
        green_slider->setMaximum(100);
        green_slider->setOrientation(Qt::Horizontal);
        green_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(green_slider, 4, 0, 1, 1);

        green_spin = new QSpinBox(Editing);
        green_spin->setObjectName(QString::fromUtf8("green_spin"));
        green_spin->setEnabled(false);
        sizePolicy3.setHeightForWidth(green_spin->sizePolicy().hasHeightForWidth());
        green_spin->setSizePolicy(sizePolicy3);
        green_spin->setMinimum(-100);
        green_spin->setMaximum(100);

        gridLayout->addWidget(green_spin, 4, 1, 1, 1);

        textBlue = new QLabel(Editing);
        textBlue->setObjectName(QString::fromUtf8("textBlue"));

        gridLayout->addWidget(textBlue, 5, 0, 1, 1);

        blue_slider = new QSlider(Editing);
        blue_slider->setObjectName(QString::fromUtf8("blue_slider"));
        blue_slider->setEnabled(false);
        sizePolicy1.setHeightForWidth(blue_slider->sizePolicy().hasHeightForWidth());
        blue_slider->setSizePolicy(sizePolicy1);
        blue_slider->setMinimum(-100);
        blue_slider->setMaximum(100);
        blue_slider->setOrientation(Qt::Horizontal);
        blue_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(blue_slider, 6, 0, 1, 1);

        blue_spin = new QSpinBox(Editing);
        blue_spin->setObjectName(QString::fromUtf8("blue_spin"));
        blue_spin->setEnabled(false);
        sizePolicy3.setHeightForWidth(blue_spin->sizePolicy().hasHeightForWidth());
        blue_spin->setSizePolicy(sizePolicy3);
        blue_spin->setMinimum(-100);
        blue_spin->setMaximum(100);

        gridLayout->addWidget(blue_spin, 6, 1, 1, 1);

        textExposure = new QLabel(Editing);
        textExposure->setObjectName(QString::fromUtf8("textExposure"));

        gridLayout->addWidget(textExposure, 7, 0, 1, 1);

        exposure_slider = new QSlider(Editing);
        exposure_slider->setObjectName(QString::fromUtf8("exposure_slider"));
        exposure_slider->setEnabled(false);
        sizePolicy1.setHeightForWidth(exposure_slider->sizePolicy().hasHeightForWidth());
        exposure_slider->setSizePolicy(sizePolicy1);
        exposure_slider->setMinimum(-100);
        exposure_slider->setMaximum(100);
        exposure_slider->setOrientation(Qt::Horizontal);
        exposure_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(exposure_slider, 8, 0, 1, 1);

        exposure_spin = new QSpinBox(Editing);
        exposure_spin->setObjectName(QString::fromUtf8("exposure_spin"));
        exposure_spin->setEnabled(false);
        sizePolicy3.setHeightForWidth(exposure_spin->sizePolicy().hasHeightForWidth());
        exposure_spin->setSizePolicy(sizePolicy3);
        exposure_spin->setMinimum(-100);
        exposure_spin->setMaximum(100);

        gridLayout->addWidget(exposure_spin, 8, 1, 1, 1);

        textContrast = new QLabel(Editing);
        textContrast->setObjectName(QString::fromUtf8("textContrast"));

        gridLayout->addWidget(textContrast, 9, 0, 1, 1);

        contrast_slider = new QSlider(Editing);
        contrast_slider->setObjectName(QString::fromUtf8("contrast_slider"));
        contrast_slider->setEnabled(false);
        sizePolicy1.setHeightForWidth(contrast_slider->sizePolicy().hasHeightForWidth());
        contrast_slider->setSizePolicy(sizePolicy1);
        contrast_slider->setMinimum(-100);
        contrast_slider->setMaximum(100);
        contrast_slider->setValue(0);
        contrast_slider->setOrientation(Qt::Horizontal);
        contrast_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(contrast_slider, 10, 0, 1, 1);

        contrast_spin = new QSpinBox(Editing);
        contrast_spin->setObjectName(QString::fromUtf8("contrast_spin"));
        contrast_spin->setEnabled(false);
        sizePolicy3.setHeightForWidth(contrast_spin->sizePolicy().hasHeightForWidth());
        contrast_spin->setSizePolicy(sizePolicy3);
        contrast_spin->setMinimum(-100);
        contrast_spin->setMaximum(100);

        gridLayout->addWidget(contrast_spin, 10, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);

        hsl_btn = new QPushButton(Editing);
        hsl_btn->setObjectName(QString::fromUtf8("hsl_btn"));
        hsl_btn->setEnabled(false);
        sizePolicy1.setHeightForWidth(hsl_btn->sizePolicy().hasHeightForWidth());
        hsl_btn->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(hsl_btn, 12, 0, 1, 1);

        ok_btn = new QPushButton(Editing);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));
        ok_btn->setEnabled(false);
        sizePolicy3.setHeightForWidth(ok_btn->sizePolicy().hasHeightForWidth());
        ok_btn->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(ok_btn, 12, 1, 1, 1);

        textHue = new QLabel(Editing);
        textHue->setObjectName(QString::fromUtf8("textHue"));

        gridLayout->addWidget(textHue, 13, 0, 1, 1);

        hue_slider = new QSlider(Editing);
        hue_slider->setObjectName(QString::fromUtf8("hue_slider"));
        hue_slider->setEnabled(false);
        sizePolicy1.setHeightForWidth(hue_slider->sizePolicy().hasHeightForWidth());
        hue_slider->setSizePolicy(sizePolicy1);
        hue_slider->setMinimum(-100);
        hue_slider->setMaximum(100);
        hue_slider->setOrientation(Qt::Horizontal);
        hue_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(hue_slider, 14, 0, 1, 1);

        hue_spin = new QSpinBox(Editing);
        hue_spin->setObjectName(QString::fromUtf8("hue_spin"));
        hue_spin->setEnabled(false);
        sizePolicy3.setHeightForWidth(hue_spin->sizePolicy().hasHeightForWidth());
        hue_spin->setSizePolicy(sizePolicy3);
        hue_spin->setMinimum(-100);
        hue_spin->setMaximum(100);

        gridLayout->addWidget(hue_spin, 14, 1, 1, 1);

        saturation_lbl = new QLabel(Editing);
        saturation_lbl->setObjectName(QString::fromUtf8("saturation_lbl"));

        gridLayout->addWidget(saturation_lbl, 15, 0, 1, 1);

        saturation_slider = new QSlider(Editing);
        saturation_slider->setObjectName(QString::fromUtf8("saturation_slider"));
        saturation_slider->setEnabled(false);
        sizePolicy1.setHeightForWidth(saturation_slider->sizePolicy().hasHeightForWidth());
        saturation_slider->setSizePolicy(sizePolicy1);
        saturation_slider->setMinimum(-100);
        saturation_slider->setMaximum(100);
        saturation_slider->setOrientation(Qt::Horizontal);
        saturation_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(saturation_slider, 16, 0, 1, 1);

        saturation_spin = new QSpinBox(Editing);
        saturation_spin->setObjectName(QString::fromUtf8("saturation_spin"));
        saturation_spin->setEnabled(false);
        sizePolicy3.setHeightForWidth(saturation_spin->sizePolicy().hasHeightForWidth());
        saturation_spin->setSizePolicy(sizePolicy3);
        saturation_spin->setMinimum(-100);
        saturation_spin->setMaximum(100);

        gridLayout->addWidget(saturation_spin, 16, 1, 1, 1);

        textLuminance = new QLabel(Editing);
        textLuminance->setObjectName(QString::fromUtf8("textLuminance"));

        gridLayout->addWidget(textLuminance, 17, 0, 1, 1);

        luminance_slider = new QSlider(Editing);
        luminance_slider->setObjectName(QString::fromUtf8("luminance_slider"));
        luminance_slider->setEnabled(false);
        sizePolicy1.setHeightForWidth(luminance_slider->sizePolicy().hasHeightForWidth());
        luminance_slider->setSizePolicy(sizePolicy1);
        luminance_slider->setMinimum(-100);
        luminance_slider->setMaximum(100);
        luminance_slider->setOrientation(Qt::Horizontal);
        luminance_slider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(luminance_slider, 18, 0, 1, 1);

        luminance_spin = new QSpinBox(Editing);
        luminance_spin->setObjectName(QString::fromUtf8("luminance_spin"));
        luminance_spin->setEnabled(false);
        sizePolicy3.setHeightForWidth(luminance_spin->sizePolicy().hasHeightForWidth());
        luminance_spin->setSizePolicy(sizePolicy3);
        luminance_spin->setMinimum(-100);
        luminance_spin->setMaximum(100);

        gridLayout->addWidget(luminance_spin, 18, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(Editing, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_7 = new QGridLayout(tab);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        sepia_btn = new QPushButton(tab);
        sepia_btn->setObjectName(QString::fromUtf8("sepia_btn"));
        sepia_btn->setEnabled(false);

        gridLayout_5->addWidget(sepia_btn, 4, 0, 1, 1);

        grayscale_btn = new QPushButton(tab);
        grayscale_btn->setObjectName(QString::fromUtf8("grayscale_btn"));
        grayscale_btn->setEnabled(false);

        gridLayout_5->addWidget(grayscale_btn, 4, 2, 1, 1);

        blur_btn = new QPushButton(tab);
        blur_btn->setObjectName(QString::fromUtf8("blur_btn"));
        blur_btn->setEnabled(false);

        gridLayout_5->addWidget(blur_btn, 0, 0, 1, 3);

        sharp_btn = new QPushButton(tab);
        sharp_btn->setObjectName(QString::fromUtf8("sharp_btn"));
        sharp_btn->setEnabled(false);

        gridLayout_5->addWidget(sharp_btn, 1, 0, 1, 3);

        steps_spin = new QSpinBox(tab);
        steps_spin->setObjectName(QString::fromUtf8("steps_spin"));
        steps_spin->setEnabled(false);
        sizePolicy3.setHeightForWidth(steps_spin->sizePolicy().hasHeightForWidth());
        steps_spin->setSizePolicy(sizePolicy3);
        steps_spin->setLayoutDirection(Qt::LeftToRight);
        steps_spin->setAutoFillBackground(false);
        steps_spin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        steps_spin->setMinimum(1);
        steps_spin->setMaximum(10);

        gridLayout_5->addWidget(steps_spin, 2, 2, 1, 1, Qt::AlignHCenter);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 2, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(48, 48, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_2, 3, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        Distortions = new QWidget();
        Distortions->setObjectName(QString::fromUtf8("Distortions"));
        gridLayout_8 = new QGridLayout(Distortions);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        flipH_btn = new QPushButton(Distortions);
        flipH_btn->setObjectName(QString::fromUtf8("flipH_btn"));
        flipH_btn->setEnabled(false);

        gridLayout_4->addWidget(flipH_btn, 0, 0, 1, 1);

        flipV_btn = new QPushButton(Distortions);
        flipV_btn->setObjectName(QString::fromUtf8("flipV_btn"));
        flipV_btn->setEnabled(false);

        gridLayout_4->addWidget(flipV_btn, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rotate_slider = new QSlider(Distortions);
        rotate_slider->setObjectName(QString::fromUtf8("rotate_slider"));
        rotate_slider->setEnabled(false);
        rotate_slider->setMinimum(-180);
        rotate_slider->setMaximum(180);
        rotate_slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(rotate_slider, 1, 0, 1, 1);

        label_7 = new QLabel(Distortions);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        rotate_spin = new QSpinBox(Distortions);
        rotate_spin->setObjectName(QString::fromUtf8("rotate_spin"));
        rotate_spin->setEnabled(false);
        rotate_spin->setMinimum(-180);
        rotate_spin->setMaximum(180);

        gridLayout_2->addWidget(rotate_spin, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_5, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_4, 1, 0, 1, 1);

        tabWidget->addTab(Distortions, QString());

        verticalLayout_3->addWidget(tabWidget);


        gridLayout_10->addLayout(verticalLayout_3, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PhotoShock", nullptr));
        open_btn->setText(QApplication::translate("MainWindow", "Open", nullptr));
        save_btn->setText(QApplication::translate("MainWindow", "Save", nullptr));
        reset_btn->setText(QApplication::translate("MainWindow", "Revert all changes", nullptr));
        undo_btn->setText(QApplication::translate("MainWindow", "<--", nullptr));
        redo_btn->setText(QApplication::translate("MainWindow", "-->", nullptr));
        zoom_out_btn->setText(QApplication::translate("MainWindow", "-", nullptr));
        zoom_in_btn->setText(QApplication::translate("MainWindow", "+", nullptr));
        r_hist->setText(QApplication::translate("MainWindow", "R", nullptr));
        g_hist->setText(QApplication::translate("MainWindow", "G", nullptr));
        b_hist->setText(QApplication::translate("MainWindow", "B", nullptr));
        textWb->setText(QApplication::translate("MainWindow", "WhiteBalance:", nullptr));
        textRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        textGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
        textBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        textExposure->setText(QApplication::translate("MainWindow", "Exposure", nullptr));
        textContrast->setText(QApplication::translate("MainWindow", "Contrast", nullptr));
        hsl_btn->setText(QApplication::translate("MainWindow", "Active HSL", nullptr));
        ok_btn->setText(QApplication::translate("MainWindow", "Ok", nullptr));
        textHue->setText(QApplication::translate("MainWindow", "Hue", nullptr));
        saturation_lbl->setText(QApplication::translate("MainWindow", "Saturation", nullptr));
        textLuminance->setText(QApplication::translate("MainWindow", "Luminance", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Editing), QApplication::translate("MainWindow", "Editing", nullptr));
        sepia_btn->setText(QApplication::translate("MainWindow", "Sepia", nullptr));
        grayscale_btn->setText(QApplication::translate("MainWindow", "GrayScale", nullptr));
        blur_btn->setText(QApplication::translate("MainWindow", "Gaussian Blur", nullptr));
        sharp_btn->setText(QApplication::translate("MainWindow", "Sharpener", nullptr));
        label->setText(QApplication::translate("MainWindow", "Filter Steps:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Filters", nullptr));
        flipH_btn->setText(QApplication::translate("MainWindow", "Flip Horizontal", nullptr));
        flipV_btn->setText(QApplication::translate("MainWindow", "Flip Vertical", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Rotate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Distortions), QApplication::translate("MainWindow", "Distortions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
