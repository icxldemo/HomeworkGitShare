/****************************************************************************
** Meta object code from reading C++ file 'studentinfoobject.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CourseSelectionAndGradeManagementSystem/studentinfoobject.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentinfoobject.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StudentInfoObject_t {
    QByteArrayData data[12];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StudentInfoObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StudentInfoObject_t qt_meta_stringdata_StudentInfoObject = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 10),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 11),
QT_MOC_LITERAL(4, 42, 13),
QT_MOC_LITERAL(5, 56, 10),
QT_MOC_LITERAL(6, 67, 17),
QT_MOC_LITERAL(7, 85, 3),
QT_MOC_LITERAL(8, 89, 4),
QT_MOC_LITERAL(9, 94, 6),
QT_MOC_LITERAL(10, 101, 3),
QT_MOC_LITERAL(11, 105, 10)
    },
    "StudentInfoObject\0snoChanged\0\0nameChanged\0"
    "genderChanged\0ageChanged\0departmentChanged\0"
    "sno\0name\0gender\0age\0department\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StudentInfoObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06,
       3,    1,   42,    2, 0x06,
       4,    1,   45,    2, 0x06,
       5,    1,   48,    2, 0x06,
       6,    1,   51,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void StudentInfoObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StudentInfoObject *_t = static_cast<StudentInfoObject *>(_o);
        switch (_id) {
        case 0: _t->snoChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->genderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->ageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->departmentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StudentInfoObject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StudentInfoObject::snoChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (StudentInfoObject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StudentInfoObject::nameChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (StudentInfoObject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StudentInfoObject::genderChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (StudentInfoObject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StudentInfoObject::ageChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (StudentInfoObject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StudentInfoObject::departmentChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject StudentInfoObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StudentInfoObject.data,
      qt_meta_data_StudentInfoObject,  qt_static_metacall, 0, 0}
};


const QMetaObject *StudentInfoObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StudentInfoObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StudentInfoObject.stringdata))
        return static_cast<void*>(const_cast< StudentInfoObject*>(this));
    return QObject::qt_metacast(_clname);
}

int StudentInfoObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = sno(); break;
        case 1: *reinterpret_cast< QString*>(_v) = name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = gender(); break;
        case 3: *reinterpret_cast< int*>(_v) = age(); break;
        case 4: *reinterpret_cast< QString*>(_v) = department(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSno(*reinterpret_cast< QString*>(_v)); break;
        case 1: setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: setGender(*reinterpret_cast< QString*>(_v)); break;
        case 3: setAge(*reinterpret_cast< int*>(_v)); break;
        case 4: setDepartment(*reinterpret_cast< QString*>(_v)); break;
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
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StudentInfoObject::snoChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StudentInfoObject::nameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StudentInfoObject::genderChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StudentInfoObject::ageChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StudentInfoObject::departmentChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE