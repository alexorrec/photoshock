/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[477];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "on_open_btn_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "on_save_btn_clicked"
QT_MOC_LITERAL(4, 52, 20), // "on_reset_btn_clicked"
QT_MOC_LITERAL(5, 73, 31), // "on_exposure_slider_valueChanged"
QT_MOC_LITERAL(6, 105, 31), // "on_contrast_slider_valueChanged"
QT_MOC_LITERAL(7, 137, 26), // "on_red_slider_valueChanged"
QT_MOC_LITERAL(8, 164, 28), // "on_green_slider_valueChanged"
QT_MOC_LITERAL(9, 193, 27), // "on_blue_slider_valueChanged"
QT_MOC_LITERAL(10, 221, 24), // "on_grayscale_btn_clicked"
QT_MOC_LITERAL(11, 246, 29), // "on_rotate_slider_valueChanged"
QT_MOC_LITERAL(12, 276, 20), // "on_flipV_btn_clicked"
QT_MOC_LITERAL(13, 297, 20), // "on_flipH_btn_clicked"
QT_MOC_LITERAL(14, 318, 26), // "on_hue_slider_valueChanged"
QT_MOC_LITERAL(15, 345, 33), // "on_saturation_slider_valueCha..."
QT_MOC_LITERAL(16, 379, 32), // "on_luminance_slider_valueChanged"
QT_MOC_LITERAL(17, 412, 18), // "on_hsl_btn_clicked"
QT_MOC_LITERAL(18, 431, 17), // "on_ok_btn_clicked"
QT_MOC_LITERAL(19, 449, 27) // "on_tabWidget_currentChanged"

    },
    "MainWindow\0on_open_btn_clicked\0\0"
    "on_save_btn_clicked\0on_reset_btn_clicked\0"
    "on_exposure_slider_valueChanged\0"
    "on_contrast_slider_valueChanged\0"
    "on_red_slider_valueChanged\0"
    "on_green_slider_valueChanged\0"
    "on_blue_slider_valueChanged\0"
    "on_grayscale_btn_clicked\0"
    "on_rotate_slider_valueChanged\0"
    "on_flipV_btn_clicked\0on_flipH_btn_clicked\0"
    "on_hue_slider_valueChanged\0"
    "on_saturation_slider_valueChanged\0"
    "on_luminance_slider_valueChanged\0"
    "on_hsl_btn_clicked\0on_ok_btn_clicked\0"
    "on_tabWidget_currentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_open_btn_clicked(); break;
        case 1: _t->on_save_btn_clicked(); break;
        case 2: _t->on_reset_btn_clicked(); break;
        case 3: _t->on_exposure_slider_valueChanged(); break;
        case 4: _t->on_contrast_slider_valueChanged(); break;
        case 5: _t->on_red_slider_valueChanged(); break;
        case 6: _t->on_green_slider_valueChanged(); break;
        case 7: _t->on_blue_slider_valueChanged(); break;
        case 8: _t->on_grayscale_btn_clicked(); break;
        case 9: _t->on_rotate_slider_valueChanged(); break;
        case 10: _t->on_flipV_btn_clicked(); break;
        case 11: _t->on_flipH_btn_clicked(); break;
        case 12: _t->on_hue_slider_valueChanged(); break;
        case 13: _t->on_saturation_slider_valueChanged(); break;
        case 14: _t->on_luminance_slider_valueChanged(); break;
        case 15: _t->on_hsl_btn_clicked(); break;
        case 16: _t->on_ok_btn_clicked(); break;
        case 17: _t->on_tabWidget_currentChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
