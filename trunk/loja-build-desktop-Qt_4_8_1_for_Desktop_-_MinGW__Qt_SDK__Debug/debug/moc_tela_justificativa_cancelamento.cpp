/****************************************************************************
** Meta object code from reading C++ file 'tela_justificativa_cancelamento.h'
**
** Created: Fri 5. Apr 08:30:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../programa Paula/loja/tela_justificativa_cancelamento.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_justificativa_cancelamento.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_justificativa_cancelamento[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x08,
      60,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_justificativa_cancelamento[] = {
    "tela_justificativa_cancelamento\0\0"
    "on_btn_confirmar_clicked()\0"
    "on_btn_cancelar_clicked()\0"
};

void tela_justificativa_cancelamento::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_justificativa_cancelamento *_t = static_cast<tela_justificativa_cancelamento *>(_o);
        switch (_id) {
        case 0: _t->on_btn_confirmar_clicked(); break;
        case 1: _t->on_btn_cancelar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tela_justificativa_cancelamento::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_justificativa_cancelamento::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_justificativa_cancelamento,
      qt_meta_data_tela_justificativa_cancelamento, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_justificativa_cancelamento::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_justificativa_cancelamento::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_justificativa_cancelamento::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_justificativa_cancelamento))
        return static_cast<void*>(const_cast< tela_justificativa_cancelamento*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_justificativa_cancelamento::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
