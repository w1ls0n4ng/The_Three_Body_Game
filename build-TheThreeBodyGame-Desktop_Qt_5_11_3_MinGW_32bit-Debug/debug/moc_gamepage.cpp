/****************************************************************************
** Meta object code from reading C++ file 'gamepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TheThreeBodyGame/gamepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gamepage_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gamepage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gamepage_t qt_meta_stringdata_Gamepage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Gamepage"
QT_MOC_LITERAL(1, 9, 10), // "myfunction"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "updateUI"
QT_MOC_LITERAL(4, 30, 14), // "updatePosition"
QT_MOC_LITERAL(5, 45, 15), // "updateGameState"
QT_MOC_LITERAL(6, 61, 8), // "saveGame"
QT_MOC_LITERAL(7, 70, 24), // "on_radioButton_2_pressed"
QT_MOC_LITERAL(8, 95, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 117, 22) // "on_radioButton_clicked"

    },
    "Gamepage\0myfunction\0\0updateUI\0"
    "updatePosition\0updateGameState\0saveGame\0"
    "on_radioButton_2_pressed\0on_pushButton_clicked\0"
    "on_radioButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gamepage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gamepage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Gamepage *_t = static_cast<Gamepage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myfunction(); break;
        case 1: _t->updateUI(); break;
        case 2: _t->updatePosition(); break;
        case 3: _t->updateGameState(); break;
        case 4: _t->saveGame(); break;
        case 5: _t->on_radioButton_2_pressed(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_radioButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Gamepage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Gamepage.data,
      qt_meta_data_Gamepage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Gamepage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gamepage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gamepage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Gamepage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
