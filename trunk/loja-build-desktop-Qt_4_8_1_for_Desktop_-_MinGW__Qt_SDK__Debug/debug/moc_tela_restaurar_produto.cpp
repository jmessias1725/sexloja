/****************************************************************************
** Meta object code from reading C++ file 'tela_restaurar_produto.h'
**
** Created: Sun 17. Feb 21:34:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_restaurar_produto.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_restaurar_produto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_restaurar_produto[] = {

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
      24,   23,   23,   23, 0x08,
      54,   49,   23,   23, 0x08,
      94,   49,   23,   23, 0x08,
     126,   49,   23,   23, 0x08,
     167,   49,   23,   23, 0x08,
     211,  205,   23,   23, 0x08,
     253,   23,   23,   23, 0x08,
     277,   49,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_restaurar_produto[] = {
    "tela_restaurar_produto\0\0"
    "mostrar_lista_produtos()\0arg1\0"
    "on_cb_tipo_currentIndexChanged(QString)\0"
    "on_le_nome_textChanged(QString)\0"
    "on_le_codigo_barras_textChanged(QString)\0"
    "on_le_fabricante_textChanged(QString)\0"
    "index\0on_tw_produtos_doubleClicked(QModelIndex)\0"
    "on_btn_limpar_clicked()\0"
    "on_le_codigo_textChanged(QString)\0"
};

void tela_restaurar_produto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_restaurar_produto *_t = static_cast<tela_restaurar_produto *>(_o);
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

const QMetaObjectExtraData tela_restaurar_produto::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_restaurar_produto::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_restaurar_produto,
      qt_meta_data_tela_restaurar_produto, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_restaurar_produto::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_restaurar_produto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_restaurar_produto::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_restaurar_produto))
        return static_cast<void*>(const_cast< tela_restaurar_produto*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_restaurar_produto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
