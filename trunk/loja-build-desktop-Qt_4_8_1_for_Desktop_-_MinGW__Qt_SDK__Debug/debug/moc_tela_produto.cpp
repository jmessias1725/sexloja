/****************************************************************************
** Meta object code from reading C++ file 'tela_produto.h'
**
** Created: Thu 25. Oct 22:24:25 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_produto.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_produto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_produto[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x08,
      45,   13,   13,   13, 0x08,
      60,   13,   13,   13, 0x08,
      92,   13,   13,   13, 0x08,
     127,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_produto[] = {
    "tela_produto\0\0event\0closeEvent(QCloseEvent*)\0"
    "limpar_dados()\0on_btn_editar_produto_clicked()\0"
    "on_btn_adicionar_produto_clicked()\0"
    "on_btn_remover_produto_clicked()\0"
};

void tela_produto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_produto *_t = static_cast<tela_produto *>(_o);
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: _t->limpar_dados(); break;
        case 2: _t->on_btn_editar_produto_clicked(); break;
        case 3: _t->on_btn_adicionar_produto_clicked(); break;
        case 4: _t->on_btn_remover_produto_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_produto::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_produto::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_produto,
      qt_meta_data_tela_produto, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_produto::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_produto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_produto::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_produto))
        return static_cast<void*>(const_cast< tela_produto*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_produto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE