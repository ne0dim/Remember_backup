/****************************************************************************
** Meta object code from reading C++ file 'NoteBook.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/NoteBook.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NoteBook.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NoteBook[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   26,    9,    9, 0x0a,
      65,    9,    9,    9, 0x0a,
      78,    9,    9,    9, 0x0a,
      89,    9,    9,    9, 0x0a,
     100,    9,    9,    9, 0x0a,
     113,    9,    9,    9, 0x08,

 // properties: name, type, flags
     157,  127, 0x00095409,
     171,  163, 0x0a495103,
     190,  178, 0x00095409,
     213,  201, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_NoteBook[] = {
    "NoteBook\0\0filterChanged()\0indexPath\0"
    "setCurrentNote(QVariantList)\0createNote()\0"
    "editNote()\0viewNote()\0deleteNote()\0"
    "filterNotes()\0bb::cascades::GroupDataModel*\0"
    "model\0QString\0filter\0NoteViewer*\0"
    "noteViewer\0NoteEditor*\0noteEditor\0"
};

void NoteBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NoteBook *_t = static_cast<NoteBook *>(_o);
        switch (_id) {
        case 0: _t->filterChanged(); break;
        case 1: _t->setCurrentNote((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 2: _t->createNote(); break;
        case 3: _t->editNote(); break;
        case 4: _t->viewNote(); break;
        case 5: _t->deleteNote(); break;
        case 6: _t->filterNotes(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NoteBook::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NoteBook::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NoteBook,
      qt_meta_data_NoteBook, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NoteBook::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NoteBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NoteBook::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NoteBook))
        return static_cast<void*>(const_cast< NoteBook*>(this));
    return QObject::qt_metacast(_clname);
}

int NoteBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bb::cascades::GroupDataModel**>(_v) = model(); break;
        case 1: *reinterpret_cast< QString*>(_v) = filter(); break;
        case 2: *reinterpret_cast< NoteViewer**>(_v) = noteViewer(); break;
        case 3: *reinterpret_cast< NoteEditor**>(_v) = noteEditor(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setFilter(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NoteBook::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
