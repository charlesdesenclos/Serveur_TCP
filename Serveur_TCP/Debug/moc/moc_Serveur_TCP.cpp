/****************************************************************************
** Meta object code from reading C++ file 'Serveur_TCP.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Serveur_TCP.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Serveur_TCP.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Serveur_TCP_t {
    QByteArrayData data[13];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Serveur_TCP_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Serveur_TCP_t qt_meta_stringdata_Serveur_TCP = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Serveur_TCP"
QT_MOC_LITERAL(1, 12, 22), // "onConnectButtonClicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "onSocketConnected"
QT_MOC_LITERAL(4, 54, 20), // "onSocketDisconnected"
QT_MOC_LITERAL(5, 75, 17), // "onSocketReadyRead"
QT_MOC_LITERAL(6, 93, 21), // "onServerNewConnection"
QT_MOC_LITERAL(7, 115, 20), // "onClientDisconnected"
QT_MOC_LITERAL(8, 136, 17), // "onClientReadyRead"
QT_MOC_LITERAL(9, 154, 22), // "onAvancerButtonClicked"
QT_MOC_LITERAL(10, 177, 22), // "onReculerButtonClicked"
QT_MOC_LITERAL(11, 200, 21), // "onGaucheButtonClicked"
QT_MOC_LITERAL(12, 222, 20) // "onDroitButtonClicked"

    },
    "Serveur_TCP\0onConnectButtonClicked\0\0"
    "onSocketConnected\0onSocketDisconnected\0"
    "onSocketReadyRead\0onServerNewConnection\0"
    "onClientDisconnected\0onClientReadyRead\0"
    "onAvancerButtonClicked\0onReculerButtonClicked\0"
    "onGaucheButtonClicked\0onDroitButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Serveur_TCP[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void Serveur_TCP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Serveur_TCP *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnectButtonClicked(); break;
        case 1: _t->onSocketConnected(); break;
        case 2: _t->onSocketDisconnected(); break;
        case 3: _t->onSocketReadyRead(); break;
        case 4: _t->onServerNewConnection(); break;
        case 5: _t->onClientDisconnected(); break;
        case 6: _t->onClientReadyRead(); break;
        case 7: _t->onAvancerButtonClicked(); break;
        case 8: _t->onReculerButtonClicked(); break;
        case 9: _t->onGaucheButtonClicked(); break;
        case 10: _t->onDroitButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Serveur_TCP::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Serveur_TCP.data,
    qt_meta_data_Serveur_TCP,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Serveur_TCP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Serveur_TCP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Serveur_TCP.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Serveur_TCP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
