/****************************************************************************
** Meta object code from reading C++ file 'tela_principal.h'
**
** Created: Tue 28. Aug 16:13:42 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_principal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_principal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      50,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_principal[] = {
    "tela_principal\0\0on_consultar_clientes_triggered()\0"
    "on_botao_sair_triggered()\0"
};

void tela_principal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_principal *_t = static_cast<tela_principal *>(_o);
        switch (_id) {
        case 0: _t->on_consultar_clientes_triggered(); break;
        case 1: _t->on_botao_sair_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tela_principal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_principal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_tela_principal,
      qt_meta_data_tela_principal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_principal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_principal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_principal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_principal))
        return static_cast<void*>(const_cast< tela_principal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int tela_principal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
