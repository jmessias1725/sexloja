/****************************************************************************
** Meta object code from reading C++ file 'tela_principal.h'
**
** Created: Thu 18. Apr 10:08:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../programa Paula/loja/tela_principal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tela_principal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tela_principal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      50,   15,   15,   15, 0x08,
      81,   15,   15,   15, 0x08,
     107,   15,   15,   15, 0x08,
     140,   15,   15,   15, 0x08,
     177,   15,   15,   15, 0x08,
     212,   15,   15,   15, 0x08,
     250,   15,   15,   15, 0x08,
     282,   15,   15,   15, 0x08,
     315,   15,   15,   15, 0x08,
     338,   15,   15,   15, 0x08,
     355,   15,   15,   15, 0x08,
     382,   15,   15,   15, 0x08,
     421,  410,   15,   15, 0x08,
     471,   15,   15,   15, 0x08,
     502,   15,   15,   15, 0x08,
     532,   15,   15,   15, 0x08,
     561,   15,   15,   15, 0x08,
     594,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tela_principal[] = {
    "tela_principal\0\0on_consultar_clientes_triggered()\0"
    "on_buscar_clientes_triggered()\0"
    "on_botao_sair_triggered()\0"
    "on_Cadastrar_cliente_triggered()\0"
    "on_cadastrar_forncecedor_triggered()\0"
    "on_buscar_fornecedores_triggered()\0"
    "on_consultar_fornecedores_triggered()\0"
    "on_Cadastro_da_Loja_triggered()\0"
    "on_cadastrar_produto_triggered()\0"
    "on_Estoque_triggered()\0atualizar_hora()\0"
    "on_btn_cal_avanc_clicked()\0"
    "on_btn_cal_voltar_clicked()\0year,month\0"
    "on_calendario_mes_cor_currentPageChanged(int,int)\0"
    "on_realizar_compra_triggered()\0"
    "on_realizar_venda_triggered()\0"
    "on_listar_contas_triggered()\0"
    "on_adicionar_despesa_triggered()\0"
    "on_adicionar_receita_triggered()\0"
};

void tela_principal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tela_principal *_t = static_cast<tela_principal *>(_o);
        switch (_id) {
        case 0: _t->on_consultar_clientes_triggered(); break;
        case 1: _t->on_buscar_clientes_triggered(); break;
        case 2: _t->on_botao_sair_triggered(); break;
        case 3: _t->on_Cadastrar_cliente_triggered(); break;
        case 4: _t->on_cadastrar_forncecedor_triggered(); break;
        case 5: _t->on_buscar_fornecedores_triggered(); break;
        case 6: _t->on_consultar_fornecedores_triggered(); break;
        case 7: _t->on_Cadastro_da_Loja_triggered(); break;
        case 8: _t->on_cadastrar_produto_triggered(); break;
        case 9: _t->on_Estoque_triggered(); break;
        case 10: _t->atualizar_hora(); break;
        case 11: _t->on_btn_cal_avanc_clicked(); break;
        case 12: _t->on_btn_cal_voltar_clicked(); break;
        case 13: _t->on_calendario_mes_cor_currentPageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->on_realizar_compra_triggered(); break;
        case 15: _t->on_realizar_venda_triggered(); break;
        case 16: _t->on_listar_contas_triggered(); break;
        case 17: _t->on_adicionar_despesa_triggered(); break;
        case 18: _t->on_adicionar_receita_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tela_principal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tela_principal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_tela_principal,
      qt_meta_data_tela_principal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tela_principal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tela_principal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tela_principal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tela_principal))
        return static_cast<void*>(const_cast< tela_principal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int tela_principal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
