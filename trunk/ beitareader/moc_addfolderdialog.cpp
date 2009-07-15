/****************************************************************************
** Meta object code from reading C++ file 'addfolderdialog.h'
**
** Created: Wed Jul 15 17:38:18 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addfolderdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addfolderdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddFolderDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      20,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   55,   16,   16, 0x08,
     100,   16,   16,   16, 0x08,
     120,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddFolderDialog[] = {
    "AddFolderDialog\0\0,,\0"
    "addFolderFinished(int,int,QString)\0,\0"
    "handleFolderSelected(QTreeWidgetItem*,int)\0"
    "handleRootClicked()\0handleOKClicked()\0"
};

const QMetaObject AddFolderDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddFolderDialog,
      qt_meta_data_AddFolderDialog, 0 }
};

const QMetaObject *AddFolderDialog::metaObject() const
{
    return &staticMetaObject;
}

void *AddFolderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddFolderDialog))
        return static_cast<void*>(const_cast< AddFolderDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddFolderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addFolderFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: handleFolderSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: handleRootClicked(); break;
        case 3: handleOKClicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AddFolderDialog::addFolderFinished(int _t1, int _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
