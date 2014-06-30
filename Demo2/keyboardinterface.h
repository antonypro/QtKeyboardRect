#ifndef KEYBOARDINTERFACE_H
#define KEYBOARDINTERFACE_H

#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtQuick>
#include <QtAndroidExtras>

class KeyboardInterface : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QRect rect READ rect)
public:
    explicit KeyboardInterface(QObject *parent = 0);

signals:

public slots:
    QRect rect();
};

#endif // KEYBOARDINTERFACE_H
