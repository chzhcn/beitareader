/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created: Wed Jul 15 17:38:17 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SettingsDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      85,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     128,   15,   15,   15, 0x0a,
     152,   15,   15,   15, 0x0a,
     177,   15,   15,   15, 0x0a,
     199,   15,   15,   15, 0x0a,
     222,   15,   15,   15, 0x08,
     251,   15,   15,   15, 0x08,
     277,   15,   15,   15, 0x08,
     301,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SettingsDialog[] = {
    "SettingsDialog\0\0"
    "psw,autoRefresh,startRefresh,readFilter,showAbs,refreshTime,autoMark\0"
    "finalInfo(QString,int,int,int,int,int,int)\0"
    "abstractNoControl(bool)\0"
    "abstractYesControl(bool)\0filterNoControl(bool)\0"
    "filterYesControl(bool)\0"
    "on_applypushButton_clicked()\0"
    "on_ResumeButton_clicked()\0"
    "on_pushButton_clicked()\0on_buttonBox_accepted()\0"
};

const QMetaObject SettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SettingsDialog,
      qt_meta_data_SettingsDialog, 0 }
};

const QMetaObject *SettingsDialog::metaObject() const
{
    return &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDialog))
        return static_cast<void*>(const_cast< SettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: finalInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 1: abstractNoControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: abstractYesControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: filterNoControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: filterYesControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_applypushButton_clicked(); break;
        case 6: on_ResumeButton_clicked(); break;
        case 7: on_pushButton_clicked(); break;
        case 8: on_buttonBox_accepted(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SettingsDialog::finalInfo(QString _t1, int _t2, int _t3, int _t4, int _t5, int _t6, int _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
