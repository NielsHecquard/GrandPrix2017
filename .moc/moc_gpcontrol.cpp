/****************************************************************************
** Meta object code from reading C++ file 'gpcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/gpcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GPControl_t {
    QByteArrayData data[13];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPControl_t qt_meta_stringdata_GPControl = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GPControl"
QT_MOC_LITERAL(1, 10, 8), // "carMoved"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 17), // "carMovedWithBoost"
QT_MOC_LITERAL(4, 38, 13), // "driverTimeout"
QT_MOC_LITERAL(5, 52, 11), // "invalidMove"
QT_MOC_LITERAL(6, 64, 11), // "syntaxError"
QT_MOC_LITERAL(7, 76, 3), // "end"
QT_MOC_LITERAL(8, 80, 3), // "res"
QT_MOC_LITERAL(9, 84, 8), // "nextMove"
QT_MOC_LITERAL(10, 93, 23), // "readyReadStandardOutput"
QT_MOC_LITERAL(11, 117, 22), // "readyReadStandardError"
QT_MOC_LITERAL(12, 140, 7) // "timeout"

    },
    "GPControl\0carMoved\0\0carMovedWithBoost\0"
    "driverTimeout\0invalidMove\0syntaxError\0"
    "end\0res\0nextMove\0readyReadStandardOutput\0"
    "readyReadStandardError\0timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GPControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPControl *_t = static_cast<GPControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->carMoved(); break;
        case 1: _t->carMovedWithBoost(); break;
        case 2: _t->driverTimeout(); break;
        case 3: _t->invalidMove(); break;
        case 4: _t->syntaxError(); break;
        case 5: _t->end((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->nextMove(); break;
        case 7: _t->readyReadStandardOutput(); break;
        case 8: _t->readyReadStandardError(); break;
        case 9: _t->timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GPControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControl::carMoved)) {
                *result = 0;
            }
        }
        {
            typedef void (GPControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControl::carMovedWithBoost)) {
                *result = 1;
            }
        }
        {
            typedef void (GPControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControl::driverTimeout)) {
                *result = 2;
            }
        }
        {
            typedef void (GPControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControl::invalidMove)) {
                *result = 3;
            }
        }
        {
            typedef void (GPControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControl::syntaxError)) {
                *result = 4;
            }
        }
        {
            typedef void (GPControl::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControl::end)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject GPControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GPControl.data,
      qt_meta_data_GPControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GPControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GPControl.stringdata0))
        return static_cast<void*>(const_cast< GPControl*>(this));
    return QObject::qt_metacast(_clname);
}

int GPControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GPControl::carMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void GPControl::carMovedWithBoost()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GPControl::driverTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void GPControl::invalidMove()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void GPControl::syntaxError()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void GPControl::end(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
