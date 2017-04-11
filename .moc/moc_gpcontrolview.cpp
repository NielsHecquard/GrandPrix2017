/****************************************************************************
** Meta object code from reading C++ file 'gpcontrolview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/gpcontrolview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpcontrolview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GPControlView_t {
    QByteArrayData data[30];
    char stringdata0[457];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPControlView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPControlView_t qt_meta_stringdata_GPControlView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GPControlView"
QT_MOC_LITERAL(1, 14, 10), // "mapChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "GPControl*"
QT_MOC_LITERAL(4, 37, 9), // "gpControl"
QT_MOC_LITERAL(5, 47, 8), // "carMoved"
QT_MOC_LITERAL(6, 56, 13), // "driverTimeout"
QT_MOC_LITERAL(7, 70, 11), // "invalidMove"
QT_MOC_LITERAL(8, 82, 11), // "syntaxError"
QT_MOC_LITERAL(9, 94, 14), // "serverResponse"
QT_MOC_LITERAL(10, 109, 5), // "start"
QT_MOC_LITERAL(11, 115, 11), // "carToFollow"
QT_MOC_LITERAL(12, 127, 28), // "on_gpMapSelector_mapSelected"
QT_MOC_LITERAL(13, 156, 7), // "mapPath"
QT_MOC_LITERAL(14, 164, 28), // "gpDriverSelector_debugToggle"
QT_MOC_LITERAL(15, 193, 3), // "car"
QT_MOC_LITERAL(16, 197, 5), // "debug"
QT_MOC_LITERAL(17, 203, 20), // "on_runbutton_clicked"
QT_MOC_LITERAL(18, 224, 27), // "on_delaySlider_valueChanged"
QT_MOC_LITERAL(19, 252, 5), // "value"
QT_MOC_LITERAL(20, 258, 18), // "gpControl_carMoved"
QT_MOC_LITERAL(21, 277, 27), // "gpControl_carMovedWithBoost"
QT_MOC_LITERAL(22, 305, 13), // "gpControl_end"
QT_MOC_LITERAL(23, 319, 23), // "gpControl_driverTimeout"
QT_MOC_LITERAL(24, 343, 21), // "gpControl_invalidMove"
QT_MOC_LITERAL(25, 365, 21), // "gpControl_syntaxError"
QT_MOC_LITERAL(26, 387, 22), // "on_abortbutton_clicked"
QT_MOC_LITERAL(27, 410, 20), // "onNextCarModeChanged"
QT_MOC_LITERAL(28, 431, 5), // "index"
QT_MOC_LITERAL(29, 437, 19) // "onFollowModeChanged"

    },
    "GPControlView\0mapChanged\0\0GPControl*\0"
    "gpControl\0carMoved\0driverTimeout\0"
    "invalidMove\0syntaxError\0serverResponse\0"
    "start\0carToFollow\0on_gpMapSelector_mapSelected\0"
    "mapPath\0gpDriverSelector_debugToggle\0"
    "car\0debug\0on_runbutton_clicked\0"
    "on_delaySlider_valueChanged\0value\0"
    "gpControl_carMoved\0gpControl_carMovedWithBoost\0"
    "gpControl_end\0gpControl_driverTimeout\0"
    "gpControl_invalidMove\0gpControl_syntaxError\0"
    "on_abortbutton_clicked\0onNextCarModeChanged\0"
    "index\0onFollowModeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPControlView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       5,    1,  122,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,
       7,    1,  128,    2, 0x06 /* Public */,
       8,    1,  131,    2, 0x06 /* Public */,
       9,    1,  134,    2, 0x06 /* Public */,
      10,    0,  137,    2, 0x06 /* Public */,
      11,    1,  138,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  141,    2, 0x08 /* Private */,
      14,    2,  144,    2, 0x08 /* Private */,
      17,    0,  149,    2, 0x08 /* Private */,
      18,    1,  150,    2, 0x08 /* Private */,
      20,    0,  153,    2, 0x08 /* Private */,
      21,    0,  154,    2, 0x08 /* Private */,
      22,    1,  155,    2, 0x08 /* Private */,
      23,    0,  158,    2, 0x08 /* Private */,
      24,    0,  159,    2, 0x08 /* Private */,
      25,    0,  160,    2, 0x08 /* Private */,
      26,    0,  161,    2, 0x08 /* Private */,
      27,    1,  162,    2, 0x08 /* Private */,
      29,    1,  165,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,

       0        // eod
};

void GPControlView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPControlView *_t = static_cast<GPControlView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapChanged((*reinterpret_cast< GPControl*(*)>(_a[1]))); break;
        case 1: _t->carMoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->driverTimeout((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->invalidMove((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->syntaxError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->serverResponse((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->start(); break;
        case 7: _t->carToFollow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_gpMapSelector_mapSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->gpDriverSelector_debugToggle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->on_runbutton_clicked(); break;
        case 11: _t->on_delaySlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->gpControl_carMoved(); break;
        case 13: _t->gpControl_carMovedWithBoost(); break;
        case 14: _t->gpControl_end((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->gpControl_driverTimeout(); break;
        case 16: _t->gpControl_invalidMove(); break;
        case 17: _t->gpControl_syntaxError(); break;
        case 18: _t->on_abortbutton_clicked(); break;
        case 19: _t->onNextCarModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->onFollowModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GPControl* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GPControlView::*_t)(GPControl * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControlView::mapChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GPControlView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControlView::carMoved)) {
                *result = 1;
            }
        }
        {
            typedef void (GPControlView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControlView::driverTimeout)) {
                *result = 2;
            }
        }
        {
            typedef void (GPControlView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControlView::invalidMove)) {
                *result = 3;
            }
        }
        {
            typedef void (GPControlView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControlView::syntaxError)) {
                *result = 4;
            }
        }
        {
            typedef void (GPControlView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControlView::serverResponse)) {
                *result = 5;
            }
        }
        {
            typedef void (GPControlView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControlView::start)) {
                *result = 6;
            }
        }
        {
            typedef void (GPControlView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPControlView::carToFollow)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject GPControlView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GPControlView.data,
      qt_meta_data_GPControlView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GPControlView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPControlView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GPControlView.stringdata0))
        return static_cast<void*>(const_cast< GPControlView*>(this));
    return QWidget::qt_metacast(_clname);
}

int GPControlView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void GPControlView::mapChanged(GPControl * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPControlView::carMoved(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPControlView::driverTimeout(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPControlView::invalidMove(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GPControlView::syntaxError(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GPControlView::serverResponse(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GPControlView::start()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void GPControlView::carToFollow(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
