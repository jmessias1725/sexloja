/****************************************************************************
** Meta object code from reading C++ file 'tela_editar_fornecedor.h'
**
** Created: Tue 9. Oct 17:04:11 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_editar_fornecedor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_editar_fornecedor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_editar_fornecedor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      52,   23,   23,   23, 0x08,
      79,   23,   23,   23, 0x08,
      97,   23,   23,   23, 0x08,
     114,   23,   23,   23, 0x08,
     144,   23,   23,   23, 0x08,
     171,   23,   23,   23, 0x08,
     192,   23,   23,   23, 0x08,
     212,   23,   23,   23, 0x08,
     241,   23,   23,   23, 0x08,
     275,  269,   23,   23, 0x08,
     313,   23,   23,   23, 0x08,
     339,   23,   23,   23, 0x08,
     366,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_editar_fornecedor[] = {
    "tela_editar_fornecedor\0\0"
    "on_tb_menos_email_clicked()\0"
    "on_tb_mais_email_clicked()\0adicionar_email()\0"
    "cancelar_email()\0on_tb_mais_telefone_clicked()\0"
    "definir_mascara_telefone()\0"
    "adicionar_telefone()\0cancelar_telefone()\0"
    "on_le_cnpj_editingFinished()\0"
    "on_le_cep_editingFinished()\0index\0"
    "on_cb_estado_currentIndexChanged(int)\0"
    "on_btn_cancelar_clicked()\0"
    "on_btn_confirmar_clicked()\0"
    "on_tb_menos_telefone_clicked()\0"
};

void tela_editar_fornecedor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_editar_fornecedor *_t = static_cast<tela_editar_fornecedor *>(_o);
        switch (_id) {
        case 0: _t->on_tb_menos_email_clicked(); break;
        case 1: _t->on_tb_mais_email_clicked(); break;
        case 2: _t->adicionar_email(); break;
        case 3: _t->cancelar_email(); break;
        case 4: _t->on_tb_mais_telefone_clicked(); break;
        case 5: _t->definir_mascara_telefone(); break;
        case 6: _t->adicionar_telefone(); break;
        case 7: _t->cancelar_telefone(); break;
        case 8: _t->on_le_cnpj_editingFinished(); break;
        case 9: _t->on_le_cep_editingFinished(); break;
        case 10: _t->on_cb_estado_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_btn_cancelar_clicked(); break;
        case 12: _t->on_btn_confirmar_clicked(); break;
        case 13: _t->on_tb_menos_telefone_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_editar_fornecedor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_editar_fornecedor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_editar_fornecedor,
      qt_meta_data_tela_editar_fornecedor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_editar_fornecedor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_editar_fornecedor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_editar_fornecedor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_editar_fornecedor))
        return static_cast<void*>(const_cast< tela_editar_fornecedor*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_editar_fornecedor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
