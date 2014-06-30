#include "keyboardinterface.h"

KeyboardInterface::KeyboardInterface(QObject *parent) : QObject(parent)
{
}

QRect KeyboardInterface::rect()
{
    int menuheight = (int)QAndroidJniObject::callStaticMethod<jint>("org.qtproject.example.Demo2.JavaInterface", "getHeight");

    QDesktopWidget widget;
    QRect rect = widget.availableGeometry();
    QRect geom = widget.screenGeometry();

    rect.moveTop(rect.top() + menuheight);
    geom.setTop(geom.top() + menuheight);

    QRect final;

    if (rect != geom)
    {
        int ftop, fleft, fwidth, fheight;

        geom.getRect(&fleft, &ftop, &fwidth, &fheight);

        if (rect.top() != ftop)
            fheight = rect.top();
        else if (rect.left() != fleft)
            fwidth = rect.left();
        else if (rect.height() != fheight)
            ftop = rect.height();
        else if (rect.width() != fwidth)
            fleft = rect.width();

        final = QRect(fleft, ftop, fwidth - fleft, fheight - ftop);
    }

    return final;
}
