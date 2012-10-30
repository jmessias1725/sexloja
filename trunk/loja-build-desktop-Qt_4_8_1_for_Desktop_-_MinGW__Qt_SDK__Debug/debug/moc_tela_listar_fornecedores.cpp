/****************************************************************************
** Meta object code from reading C++ file 'tela_listar_fornecedores.h'
**
** Created: Mon 29. Oct 20:35:52 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_listar_fornecedores.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_listar_fornecedores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_listar_fornecedores[] = {

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
      26,   25,   25,   25, 0x08,
      59,   25,   25,   25, 0x08,
      85,   25,   25,   25, 0x08,
     115,  109,   25,   25, 0x08,
     161,   25,   25,   25, 0x08,
     191,  185,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_listar_fornecedores[] = {
    "tela_listar_fornecedores\0\0"
    "on_le_telefone_editingFinished()\0"
    "on_btn_cancelar_clicked()\0"
    "on_btn_buscar_clicked()\0index\0"
    "on_tv_fornecedores_doubleClicked(QModelIndex)\0"
    "on_btn_limpar_clicked()\0event\0"
    "closeEvent(QCloseEvent*)\0"
};

void tela_listar_fornecedores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_listar_fornecedores *_t = static_cast<tela_listar_fornecedores *>(_o);
        switch (_id) {
        case 0: _t->on_le_telefone_editingFinished(); break;
        case 1: _t->on_btn_cancelar_clicked(); break;
        case 2: _t->on_btn_buscar_clicked(); break;
        case 3: _t->on_tv_fornecedores_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_btn_limpar_clicked(); break;
        case 5: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_listar_fornecedores::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_listar_fornecedores::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_listar_fornecedores,
      qt_meta_data_tela_listar_fornecedores, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_listar_fornecedores::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_listar_fornecedores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_listar_fornecedores::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_listar_fornecedores))
        return static_cast<void*>(const_cast< tela_listar_fornecedores*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_listar_fornecedores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
