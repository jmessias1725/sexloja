/****************************************************************************
** Meta object code from reading C++ file 'tela_editar_loja.h'
**
** Created: Wed 3. Apr 14:29:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../programa Paula/loja/tela_editar_loja.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_editar_loja.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_editar_loja[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      50,   17,   17,   17, 0x08,
      80,   17,   17,   17, 0x08,
     111,   17,   17,   17, 0x08,
     138,   17,   17,   17, 0x08,
     159,   17,   17,   17, 0x08,
     179,   17,   17,   17, 0x08,
     208,   17,   17,   17, 0x08,
     242,  236,   17,   17, 0x08,
     280,   17,   17,   17, 0x08,
     306,   17,   17,   17, 0x08,
     339,  333,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_editar_loja[] = {
    "tela_editar_loja\0\0on_btn_adicionar_logo_clicked()\0"
    "on_tb_mais_telefone_clicked()\0"
    "on_tb_menos_telefone_clicked()\0"
    "definir_mascara_telefone()\0"
    "adicionar_telefone()\0cancelar_telefone()\0"
    "on_le_cnpj_editingFinished()\0"
    "on_le_cep_editingFinished()\0index\0"
    "on_cb_estado_currentIndexChanged(int)\0"
    "on_btn_cancelar_clicked()\0"
    "on_btn_confirmar_clicked()\0event\0"
    "closeEvent(QCloseEvent*)\0"
};

void tela_editar_loja::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_editar_loja *_t = static_cast<tela_editar_loja *>(_o);
        switch (_id) {
        case 0: _t->on_btn_adicionar_logo_clicked(); break;
        case 1: _t->on_tb_mais_telefone_clicked(); break;
        case 2: _t->on_tb_menos_telefone_clicked(); break;
        case 3: _t->definir_mascara_telefone(); break;
        case 4: _t->adicionar_telefone(); break;
        case 5: _t->cancelar_telefone(); break;
        case 6: _t->on_le_cnpj_editingFinished(); break;
        case 7: _t->on_le_cep_editingFinished(); break;
        case 8: _t->on_cb_estado_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_btn_cancelar_clicked(); break;
        case 10: _t->on_btn_confirmar_clicked(); break;
        case 11: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_editar_loja::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_editar_loja::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tela_editar_loja,
      qt_meta_data_tela_editar_loja, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_editar_loja::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_editar_loja::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_editar_loja::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_editar_loja))
        return static_cast<void*>(const_cast< tela_editar_loja*>(this));
    return QDialog::qt_metacast(_clname);
}

int tela_editar_loja::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
