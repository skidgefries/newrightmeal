/****************************************************************************
** Meta object code from reading C++ file 'dietplan.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rightmeal/dietplan.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dietplan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_dietplan_t {
    uint offsetsAndSizes[18];
    char stringdata0[9];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[32];
    char stringdata4[31];
    char stringdata5[32];
    char stringdata6[32];
    char stringdata7[32];
    char stringdata8[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_dietplan_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_dietplan_t qt_meta_stringdata_dietplan = {
    {
        QT_MOC_LITERAL(0, 8),  // "dietplan"
        QT_MOC_LITERAL(9, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 31),  // "on_commandLinkButton_26_clicked"
        QT_MOC_LITERAL(64, 30),  // "on_commandLinkButton_6_clicked"
        QT_MOC_LITERAL(95, 31),  // "on_commandLinkButton_22_clicked"
        QT_MOC_LITERAL(127, 31),  // "on_commandLinkButton_23_clicked"
        QT_MOC_LITERAL(159, 31),  // "on_commandLinkButton_24_clicked"
        QT_MOC_LITERAL(191, 31)   // "on_commandLinkButton_25_clicked"
    },
    "dietplan",
    "on_pushButton_clicked",
    "",
    "on_commandLinkButton_26_clicked",
    "on_commandLinkButton_6_clicked",
    "on_commandLinkButton_22_clicked",
    "on_commandLinkButton_23_clicked",
    "on_commandLinkButton_24_clicked",
    "on_commandLinkButton_25_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_dietplan[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject dietplan::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_dietplan.offsetsAndSizes,
    qt_meta_data_dietplan,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_dietplan_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<dietplan, std::true_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_commandLinkButton_26_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_commandLinkButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_commandLinkButton_22_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_commandLinkButton_23_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_commandLinkButton_24_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_commandLinkButton_25_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void dietplan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dietplan *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_commandLinkButton_26_clicked(); break;
        case 2: _t->on_commandLinkButton_6_clicked(); break;
        case 3: _t->on_commandLinkButton_22_clicked(); break;
        case 4: _t->on_commandLinkButton_23_clicked(); break;
        case 5: _t->on_commandLinkButton_24_clicked(); break;
        case 6: _t->on_commandLinkButton_25_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *dietplan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dietplan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dietplan.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dietplan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
