/****************************************************************************
** Meta object code from reading C++ file 'tela_fornecedor.h'
**
** Created: Wed 13. Feb 16:49:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_fornecedor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_fornecedor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_fornecedor[] = {

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
      23,   17,   16,   16, 0x08,
      48,   16,   16,   16, 0x08,
      63,   16,   16,   16, 0x08,
      98,   16,   16,   16, 0x08,
     136,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_fornecedor[] = {
    "tela_fornecedor\0\0event\0closeEvent(QCloseEvent*)\0"
    "limpar_dados()\0on_btn_editar_fornecedor_clicked()\0"
    "on_btn_adicionar_fornecedor_clicked()\0"
    "on_btn_remover_fornecedor_clicked()\0"
};

void tela_fornecedor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_fornecedor *_t = static_cast<tela_fornecedor *>(_o);
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: _t->limpar_dados(); break;
        case 2: _t->on_btn_editar_fornecedor_clicked(); break;
        case 3: _t->on_btn_adicionar_fornecedor_clicked(); break;
        case 4: _t->on_btn_remover_fornecedor_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_fornecedor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_fornecedor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_fornecedor,
      qt_meta_data_tela_fornecedor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_fornecedor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_fornecedor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_fornecedor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_fornecedor))
        return static_cast<void*>(const_cast< tela_fornecedor*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_fornecedor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
