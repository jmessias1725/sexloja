/****************************************************************************
** Meta object code from reading C++ file 'tela_vender.h'
**
** Created: Thu 27. Dec 14:38:53 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_vender.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_vender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_vender[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x08,
      44,   12,   12,   12, 0x08,
      59,   12,   12,   12, 0x08,
      91,   12,   12,   12, 0x08,
     126,   12,   12,   12, 0x08,
     157,  151,   12,   12, 0x08,
     205,   12,   12,   12, 0x08,
     238,   12,   12,   12, 0x08,
     265,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_vender[] = {
    "tela_vender\0\0event\0closeEvent(QCloseEvent*)\0"
    "limpar_dados()\0on_btn_buscar_cliente_clicked()\0"
    "on_btn_adicionar_produto_clicked()\0"
    "mostrar_lista_produtos()\0index\0"
    "on_tw_lista_produtos_doubleClicked(QModelIndex)\0"
    "on_btn_remover_produto_clicked()\0"
    "on_btn_confirmar_clicked()\0"
    "on_le_desconto_editingFinished()\0"
};

void tela_vender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_vender *_t = static_cast<tela_vender *>(_o);
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: _t->limpar_dados(); break;
        case 2: _t->on_btn_buscar_cliente_clicked(); break;
        case 3: _t->on_btn_adicionar_produto_clicked(); break;
        case 4: _t->mostrar_lista_produtos(); break;
        case 5: _t->on_tw_lista_produtos_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_btn_remover_produto_clicked(); break;
        case 7: _t->on_btn_confirmar_clicked(); break;
        case 8: _t->on_le_desconto_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_vender::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_vender::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_vender,
      qt_meta_data_tela_vender, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_vender::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_vender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_vender::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_vender))
        return static_cast<void*>(const_cast< tela_vender*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_vender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
