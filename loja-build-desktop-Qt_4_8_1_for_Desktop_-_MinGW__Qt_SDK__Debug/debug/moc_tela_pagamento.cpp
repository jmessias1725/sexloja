/****************************************************************************
** Meta object code from reading C++ file 'tela_pagamento.h'
**
** Created: Mon 19. Nov 17:08:25 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_pagamento.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_pagamento.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_pagamento[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      42,   15,   15,   15, 0x08,
      66,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_pagamento[] = {
    "tela_pagamento\0\0on_btn_dinheiro_clicked()\0"
    "on_btn_cartao_clicked()\0on_btn_cheque_clicked()\0"
};

void tela_pagamento::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_pagamento *_t = static_cast<tela_pagamento *>(_o);
        switch (_id) {
        case 0: _t->on_btn_dinheiro_clicked(); break;
        case 1: _t->on_btn_cartao_clicked(); break;
        case 2: _t->on_btn_cheque_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tela_pagamento::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_pagamento::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_pagamento,
      qt_meta_data_tela_pagamento, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_pagamento::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_pagamento::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_pagamento::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_pagamento))
        return static_cast<void*>(const_cast< tela_pagamento*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_pagamento::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
