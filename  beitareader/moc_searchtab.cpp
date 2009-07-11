/****************************************************************************
** Meta object code from reading C++ file 'searchtab.h'
**
** Created: Sat Jul 11 13:54:45 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "searchtab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchtab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchTab[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SearchTab[] = {
    "SearchTab\0\0searchResultItems(QVector<Item*>)\0"
    "handleSearchButtonClicked()\0"
};

const QMetaObject SearchTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SearchTab,
      qt_meta_data_SearchTab, 0 }
};

const QMetaObject *SearchTab::metaObject() const
{
    return &staticMetaObject;
}

void *SearchTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchTab))
        return static_cast<void*>(const_cast< SearchTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int SearchTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: searchResultItems((*reinterpret_cast< QVector<Item*>(*)>(_a[1]))); break;
        case 1: handleSearchButtonClicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SearchTab::searchResultItems(QVector<Item*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
