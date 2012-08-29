/****************************************************************************
** Meta object code from reading C++ file 'tela_cadastro_email.h'
**
** Created: Tue 28. Aug 23:02:15 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loja/tela_cadastro_email.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_cadastro_email.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_cadastro_email[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_cadastro_email[] = {
    "tela_cadastro_email\0\0on_btn_confirmar_clicked()\0"
};

void tela_cadastro_email::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_cadastro_email *_t = static_cast<tela_cadastro_email *>(_o);
        switch (_id) {
        case 0: _t->on_btn_confirmar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tela_cadastro_email::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_cadastro_email::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tela_cadastro_email,
      qt_meta_data_tela_cadastro_email, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_cadastro_email::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_cadastro_email::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_cadastro_email::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_cadastro_email))
        return static_cast<void*>(const_cast< tela_cadastro_email*>(this));
    return QWidget::qt_metacast(_clname);
}

int tela_cadastro_email::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
