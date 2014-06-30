package org.qtproject.example.Demo2;

import android.app.Activity;
import android.graphics.Rect;
import android.view.View;
import android.view.Window;

public class JavaInterface extends org.qtproject.qt5.android.bindings.QtActivity
{
    private static JavaInterface instance;

    public JavaInterface()
    {
        instance = this;
    }

    public static int getHeight()
    {
        Rect r = new Rect();
        Window window = instance.getWindow();
        View rootview = window.getDecorView();
        rootview.getWindowVisibleDisplayFrame(r);

        return r.top;
    }
}

