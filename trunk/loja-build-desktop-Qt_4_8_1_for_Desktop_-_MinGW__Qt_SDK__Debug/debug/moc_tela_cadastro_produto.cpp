/****************************************************************************
** Meta object code from reading C++ file 'tela_cadastro_produto.h'
**
** Created: Wed 24. Oct 23:35:00 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_cadastro_produto.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_cadastro_produto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_cadastro_produto[] = {

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
      23,   22,   22,   22, 0x08,
      57,   22,   22,   22, 0x08,
      84,   22,   22,   22, 0x08,
     116,  110,   22,   22, 0x08,
     146,  141,   22,   22, 0x08,
     178,  141,   22,   22, 0x08,
     216,   22,   22,   22, 0x08,
     253,   22,   22,   22, 0x08,
     289,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_cadastro_produto[] = {
    "tela_cadastro_produto\0\0"
    "on_btn_adicionar_imagem_clicked()\0"
    "on_btn_confirmar_clicked()\0"
    "on_btn_cancelar_clicked()\0event\0"
    "closeEvent(QCloseEvent*)\0arg1\0"
    "on_le_nome_textChanged(QString)\0"
    "on_le_fabricante_textChanged(QString)\0"
    "on_le_valor_compra_editingFinished()\0"
    "on_le_valor_venda_editingFinished()\0"
    "limpar_tela()\0"
};

void tela_cadastro_produto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_cadastro_produto *_t = static_cast<tela_cadastro_produto *>(_o);
        switch (_id) {
        case 0: _t->on_btn_adicionar_imagem_clicked(); break;
        case 1: _t->on_btn_confirmar_clicked(); break;
        case 2: _t->on_btn_cancelar_clicked(); break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->on_le_nome_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_le_fabricante_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_le_valor_compra_editingFinished(); break;
        case 7: _t->on_le_valor_venda_editingFinished(); break;
        case 8: _t->limpar_tela(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_cadastro_produto::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_cadastro_produto::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_cadastro_produto,
      qt_meta_data_tela_cadastro_produto, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_cadastro_produto::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_cadastro_produto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_cadastro_produto::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_cadastro_produto))
        return static_cast<void*>(const_cast< tela_cadastro_produto*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_cadastro_produto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
