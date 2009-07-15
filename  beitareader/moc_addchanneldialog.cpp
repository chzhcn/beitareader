/****************************************************************************
** Meta object code from reading C++ file 'addchanneldialog.h'
**
** Created: Wed Jul 15 17:38:19 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addchanneldialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addchanneldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddChannelDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      21,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   57,   17,   17, 0x08,
     102,   17,   17,   17, 0x08,
     123,   17,   17,   17, 0x08,
     147,   17,   17,   17, 0x08,
     165,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddChannelDialog[] = {
    "AddChannelDialog\0\0,,\0"
    "addChannelFinished(int,int,QString)\0"
    ",\0handleFolderSelected(QTreeWidgetItem*,int)\0"
    "handleCheckClicked()\0handleCheckResult(bool)\0"
    "handleOkClicked()\0inputUrlChanged(QString)\0"
};

const QMetaObject AddChannelDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddChannelDialog,
      qt_meta_data_AddChannelDialog, 0 }
};

const QMetaObject *AddChannelDialog::metaObject() const
{
    return &staticMetaObject;
}

void *AddChannelDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddChannelDialog))
        return static_cast<void*>(const_cast< AddChannelDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddChannelDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addChannelFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: handleFolderSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: handleCheckClicked(); break;
        case 3: handleCheckResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: handleOkClicked(); break;
        case 5: inputUrlChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AddChannelDialog::addChannelFinished(int _t1, int _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
