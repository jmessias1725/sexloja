/****************************************************************************
** Meta object code from reading C++ file 'tela_loja.h'
**
** Created: Mon 19. Nov 15:52:27 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_loja.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_loja.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_loja[] = {

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
      17,   11,   10,   10, 0x08,
      42,   10,   10,   10, 0x08,
      57,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_loja[] = {
    "tela_loja\0\0event\0closeEvent(QCloseEvent*)\0"
    "limpar_dados()\0on_btn_editar_loja_clicked()\0"
};

void tela_loja::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_loja *_t = static_cast<tela_loja *>(_o);
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: _t->limpar_dados(); break;
        case 2: _t->on_btn_editar_loja_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_loja::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_loja::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_loja,
      qt_meta_data_tela_loja, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_loja::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_loja::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_loja::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_loja))
        return static_cast<void*>(const_cast< tela_loja*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_loja::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
