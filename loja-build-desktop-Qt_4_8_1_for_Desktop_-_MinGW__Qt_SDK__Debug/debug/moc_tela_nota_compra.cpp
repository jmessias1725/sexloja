/****************************************************************************
** Meta object code from reading C++ file 'tela_nota_compra.h'
**
** Created: Fri 5. Apr 14:57:36 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../programa Paula/loja/tela_nota_compra.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_nota_compra.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_nota_compra[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x08,
      54,   17,   17,   17, 0x08,
      79,   17,   17,   17, 0x08,
     111,   17,  106,   17, 0x08,
     142,   17,   17,   17, 0x08,
     168,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_nota_compra[] = {
    "tela_nota_compra\0\0index\0"
    "ajustar_parcelas(QModelIndex)\0"
    "on_btn_reabrir_clicked()\0"
    "on_btn_confirmar_clicked()\0bool\0"
    "atualizar_dados_parcelamento()\0"
    "on_btn_cancelar_clicked()\0"
    "on_btn_cancelar_nota_clicked()\0"
};

void tela_nota_compra::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_nota_compra *_t = static_cast<tela_nota_compra *>(_o);
        switch (_id) {
        case 0: _t->ajustar_parcelas((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_btn_reabrir_clicked(); break;
        case 2: _t->on_btn_confirmar_clicked(); break;
        case 3: { bool _r = _t->atualizar_dados_parcelamento();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->on_btn_cancelar_clicked(); break;
        case 5: _t->on_btn_cancelar_nota_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_nota_compra::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_nota_compra::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_nota_compra,
      qt_meta_data_tela_nota_compra, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_nota_compra::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_nota_compra::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_nota_compra::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_nota_compra))
        return static_cast<void*>(const_cast< tela_nota_compra*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_nota_compra::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
