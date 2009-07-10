/****************************************************************************
** Meta object code from reading C++ file 'menutoolbarcontroller.h'
**
** Created: Thu Jul 9 22:24:30 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "menutoolbarcontroller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menutoolbarcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MenuToolBarController[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      42,   22,   22,   22, 0x0a,
      60,   22,   22,   22, 0x0a,
      76,   22,   22,   22, 0x0a,
      96,   22,   22,   22, 0x0a,
     113,   22,   22,   22, 0x0a,
     131,   22,   22,   22, 0x0a,
     151,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MenuToolBarController[] = {
    "MenuToolBarController\0\0addChannelDialog()\0"
    "addFolderDialog()\0searchArticle()\0"
    "updateAllChannels()\0fullScreen(bool)\0"
    "showToolBar(bool)\0showStatusBar(bool)\0"
    "settingsDialog()\0"
};

const QMetaObject MenuToolBarController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MenuToolBarController,
      qt_meta_data_MenuToolBarController, 0 }
};

const QMetaObject *MenuToolBarController::metaObject() const
{
    return &staticMetaObject;
}

void *MenuToolBarController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuToolBarController))
        return static_cast<void*>(const_cast< MenuToolBarController*>(this));
    return QObject::qt_metacast(_clname);
}

int MenuToolBarController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addChannelDialog(); break;
        case 1: addFolderDialog(); break;
        case 2: searchArticle(); break;
        case 3: updateAllChannels(); break;
        case 4: fullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: showToolBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: showStatusBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: settingsDialog(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
