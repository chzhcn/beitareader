/****************************************************************************
** Meta object code from reading C++ file 'mytree.h'
**
** Created: Fri Jul 10 14:02:44 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mytree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyTree[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,    8,    7,    7, 0x08,
      39,   37,    7,    7, 0x08,
      83,    7,    7,    7, 0x08,
     100,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyTree[] = {
    "MyTree\0\0pos\0contextMenuEvent(QPoint)\0"
    ",\0on_item_doubleClicked(QTreeWidgetItem*,int)\0"
    "rename_clicked()\0delete_clicked()\0"
};

const QMetaObject MyTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_MyTree,
      qt_meta_data_MyTree, 0 }
};

const QMetaObject *MyTree::metaObject() const
{
    return &staticMetaObject;
}

void *MyTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyTree))
        return static_cast<void*>(const_cast< MyTree*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int MyTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: contextMenuEvent((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: on_item_doubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: rename_clicked(); break;
        case 3: delete_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
