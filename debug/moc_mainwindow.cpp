/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue 29. May 17:42:21 2012
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      84,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     132,   11,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,
     180,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,
     228,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_num0Button_clicked()\0"
    "on_num1Button_clicked()\0on_num2Button_clicked()\0"
    "on_num3Button_clicked()\0on_num4Button_clicked()\0"
    "on_num5Button_clicked()\0on_num6Button_clicked()\0"
    "on_num7Button_clicked()\0on_num8Button_clicked()\0"
    "on_num9Button_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_num0Button_clicked(); break;
        case 1: on_num1Button_clicked(); break;
        case 2: on_num2Button_clicked(); break;
        case 3: on_num3Button_clicked(); break;
        case 4: on_num4Button_clicked(); break;
        case 5: on_num5Button_clicked(); break;
        case 6: on_num6Button_clicked(); break;
        case 7: on_num7Button_clicked(); break;
        case 8: on_num8Button_clicked(); break;
        case 9: on_num9Button_clicked(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
