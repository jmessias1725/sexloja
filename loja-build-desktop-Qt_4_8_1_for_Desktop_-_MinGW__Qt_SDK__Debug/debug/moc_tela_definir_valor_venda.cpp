/****************************************************************************
** Meta object code from reading C++ file 'tela_definir_valor_venda.h'
**
** Created: Fri 5. Apr 08:29:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../programa Paula/loja/tela_definir_valor_venda.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_definir_valor_venda.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_definir_valor_venda[] = {

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
      32,   26,   25,   25, 0x08,
      57,   25,   25,   25, 0x08,
      72,   25,   25,   25, 0x08,
      98,   25,   25,   25, 0x08,
     134,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_definir_valor_venda[] = {
    "tela_definir_valor_venda\0\0event\0"
    "closeEvent(QCloseEvent*)\0limpar_dados()\0"
    "on_btn_cancelar_clicked()\0"
    "on_le_valor_venda_editingFinished()\0"
    "on_btn_confirmar_clicked()\0"
};

void tela_definir_valor_venda::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_definir_valor_venda *_t = static_cast<tela_definir_valor_venda *>(_o);
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: _t->limpar_dados(); break;
        case 2: _t->on_btn_cancelar_clicked(); break;
        case 3: _t->on_le_valor_venda_editingFinished(); break;
        case 4: _t->on_btn_confirmar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_definir_valor_venda::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_definir_valor_venda::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_definir_valor_venda,
      qt_meta_data_tela_definir_valor_venda, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_definir_valor_venda::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_definir_valor_venda::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_definir_valor_venda::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_definir_valor_venda))
        return static_cast<void*>(const_cast< tela_definir_valor_venda*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_definir_valor_venda::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
