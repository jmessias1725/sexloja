/****************************************************************************
** Meta object code from reading C++ file 'tela_pagamento_cheque.h'
**
** Created: Mon 26. Nov 16:34:33 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_pagamento_cheque.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_pagamento_cheque.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_pagamento_cheque[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      53,   22,   22,   22, 0x08,
      79,   22,   22,   22, 0x08,
     106,   22,   22,   22, 0x08,
     130,   22,   22,   22, 0x08,
     151,   22,   22,   22, 0x08,
     196,  188,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_pagamento_cheque[] = {
    "tela_pagamento_cheque\0\0"
    "on_le_valor_editingFinished()\0"
    "on_btn_cancelar_clicked()\0"
    "on_btn_confirmar_clicked()\0"
    "on_cb_a_vista_clicked()\0on_gb_para_clicked()\0"
    "on_le_codigo_banco_editingFinished()\0"
    "checked\0on_cb_inserir_caixa_hoje_toggled(bool)\0"
};

void tela_pagamento_cheque::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_pagamento_cheque *_t = static_cast<tela_pagamento_cheque *>(_o);
        switch (_id) {
        case 0: _t->on_le_valor_editingFinished(); break;
        case 1: _t->on_btn_cancelar_clicked(); break;
        case 2: _t->on_btn_confirmar_clicked(); break;
        case 3: _t->on_cb_a_vista_clicked(); break;
        case 4: _t->on_gb_para_clicked(); break;
        case 5: _t->on_le_codigo_banco_editingFinished(); break;
        case 6: _t->on_cb_inserir_caixa_hoje_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_pagamento_cheque::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_pagamento_cheque::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_pagamento_cheque,
      qt_meta_data_tela_pagamento_cheque, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_pagamento_cheque::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_pagamento_cheque::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_pagamento_cheque::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_pagamento_cheque))
        return static_cast<void*>(const_cast< tela_pagamento_cheque*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_pagamento_cheque::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
