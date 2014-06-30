import QtQuick 2.2
import QtQuick.Window 2.1

Window {
    visible: true
    width: 360
    height: 360

    MouseArea {
        anchors.fill: parent
        property var keyrect: key.rect;
        onClicked: {
            label.text = keyrect.toString();
            Qt.inputMethod.show();
        }
    }

    Text {
        id: label
        text: qsTr("Click me")
        anchors.centerIn: parent
    }
}
