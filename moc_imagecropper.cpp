/****************************************************************************
** Meta object code from reading C++ file 'imagecropper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "imagecropper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagecropper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageCropper_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageCropper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageCropper_t qt_meta_stringdata_ImageCropper = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ImageCropper"
QT_MOC_LITERAL(1, 13, 18), // "setBackgroundColor"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "_backgroundColor"
QT_MOC_LITERAL(4, 50, 26), // "setCroppingRectBorderColor"
QT_MOC_LITERAL(5, 77, 12), // "_borderColor"
QT_MOC_LITERAL(6, 90, 13), // "setProportion"
QT_MOC_LITERAL(7, 104, 11) // "_proportion"

    },
    "ImageCropper\0setBackgroundColor\0\0"
    "_backgroundColor\0setCroppingRectBorderColor\0"
    "_borderColor\0setProportion\0_proportion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageCropper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QSizeF,    7,

       0        // eod
};

void ImageCropper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageCropper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setCroppingRectBorderColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->setProportion((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImageCropper::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ImageCropper.data,
    qt_meta_data_ImageCropper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageCropper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageCropper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageCropper.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ImageCropper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
