/****************************************************************************
** Meta object code from reading C++ file 'httpget.h'
**
** Created: Sat Jul 11 13:54:51 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "httpget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HttpGet[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,   16,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HttpGet[] = {
    "HttpGet\0\0done()\0error\0httpDone(bool)\0"
};

const QMetaObject HttpGet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpGet,
      qt_meta_data_HttpGet, 0 }
};

const QMetaObject *HttpGet::metaObject() const
{
    return &staticMetaObject;
}

void *HttpGet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HttpGet))
        return static_cast<void*>(const_cast< HttpGet*>(this));
    return QObject::qt_metacast(_clname);
}

int HttpGet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: done(); break;
        case 1: httpDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HttpGet::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
