/****************************************************************************
** Meta object code from reading C++ file 'NoteEditor.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/NoteEditor.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NoteEditor.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NoteEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   54, // properties
       1,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,
      48,   11,   11,   11, 0x05,
      69,   11,   11,   11, 0x05,
      88,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     109,  102,   11,   11, 0x0a,
     154,   11,   11,   11, 0x0a,
     165,   11,   11,   11, 0x0a,

 // properties: name, type, flags
     181,  173, 0x0a495103,
     187,  173, 0x0a495103,
     209,  199, 0x10495103,
     226,  221, 0x01495103,
     241,  236, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, flags, count, data
     236, 0x0,    2,   78,

 // enum data: key, value
     246, uint(NoteEditor::CreateMode),
     257, uint(NoteEditor::EditMode),

       0        // eod
};

static const char qt_meta_stringdata_NoteEditor[] = {
    "NoteEditor\0\0titleChanged()\0"
    "descriptionChanged()\0dueDateTimeChanged()\0"
    "completedChanged()\0modeChanged()\0"
    "noteId\0loadNote(bb::pim::notebook::NotebookEntryId)\0"
    "saveNote()\0reset()\0QString\0title\0"
    "description\0QDateTime\0dueDateTime\0"
    "bool\0completed\0Mode\0mode\0CreateMode\0"
    "EditMode\0"
};

void NoteEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NoteEditor *_t = static_cast<NoteEditor *>(_o);
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->descriptionChanged(); break;
        case 2: _t->dueDateTimeChanged(); break;
        case 3: _t->completedChanged(); break;
        case 4: _t->modeChanged(); break;
        case 5: _t->loadNote((*reinterpret_cast< const bb::pim::notebook::NotebookEntryId(*)>(_a[1]))); break;
        case 6: _t->saveNote(); break;
        case 7: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NoteEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NoteEditor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NoteEditor,
      qt_meta_data_NoteEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NoteEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NoteEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NoteEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NoteEditor))
        return static_cast<void*>(const_cast< NoteEditor*>(this));
    return QObject::qt_metacast(_clname);
}

int NoteEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = description(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = dueDateTime(); break;
        case 3: *reinterpret_cast< bool*>(_v) = completed(); break;
        case 4: *reinterpret_cast< Mode*>(_v) = mode(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 2: setDueDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 3: setCompleted(*reinterpret_cast< bool*>(_v)); break;
        case 4: setMode(*reinterpret_cast< Mode*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NoteEditor::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NoteEditor::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void NoteEditor::dueDateTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void NoteEditor::completedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void NoteEditor::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
