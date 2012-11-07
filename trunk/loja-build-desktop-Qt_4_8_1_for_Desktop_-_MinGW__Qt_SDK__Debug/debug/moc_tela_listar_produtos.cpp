/****************************************************************************
** Meta object code from reading C++ file 'tela_listar_produtos.h'
**
** Created: Tue 6. Nov 20:31:07 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_listar_produtos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_listar_produtos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_listar_produtos[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      52,   47,   21,   21, 0x08,
      92,   47,   21,   21, 0x08,
     124,   47,   21,   21, 0x08,
     165,   47,   21,   21, 0x08,
     209,  203,   21,   21, 0x08,
     251,   21,   21,   21, 0x08,
     275,   47,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_listar_produtos[] = {
    "tela_listar_produtos\0\0mostrar_lista_produtos()\0"
    "arg1\0on_cb_tipo_currentIndexChanged(QString)\0"
    "on_le_nome_textChanged(QString)\0"
    "on_le_codigo_barras_textChanged(QString)\0"
    "on_le_fabricante_textChanged(QString)\0"
    "index\0on_tw_produtos_doubleClicked(QModelIndex)\0"
    "on_btn_limpar_clicked()\0"
    "on_le_codigo_textChanged(QString)\0"
};

void tela_listar_produtos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_listar_produtos *_t = static_cast<tela_listar_produtos *>(_o);
        switch (_id) {
        case 0: _t->mostrar_lista_produtos(); break;
        case 1: _t->on_cb_tipo_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_le_nome_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_le_codigo_barras_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_le_fabricante_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_tw_produtos_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_btn_limpar_clicked(); break;
        case 7: _t->on_le_codigo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_listar_produtos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_listar_produtos::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_listar_produtos,
      qt_meta_data_tela_listar_produtos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_listar_produtos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_listar_produtos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_listar_produtos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_listar_produtos))
        return static_cast<void*>(const_cast< tela_listar_produtos*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_listar_produtos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
