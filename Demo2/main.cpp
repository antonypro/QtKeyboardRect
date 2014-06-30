#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtQuick>
#include "keyboardinterface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QQmlApplicationEngine engine;
    KeyboardInterface interface;
    engine.rootContext()->setContextProperty(QLatin1String("key"), &interface);
    engine.load(QUrl(QStringLiteral("qrc:/qml/qmlwin.qml")));

    return a.exec();
}
