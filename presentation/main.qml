import QtQuick 2.15
import QtQuick.Controls 2.15
import MyTest.controllers 1.0


ApplicationWindow
{
    id: root
    visible: true
    width: 1200
    height: 800
    
    
    Rectangle
    {
        width: parent.width/2
        height: parent.height/2
        anchors.centerIn: parent
        color: "red"
        
        MouseArea
        {
            anchors.fill: parent
            
            onClicked: console.log(BookController.book)
            
            
            Label
            {
                anchors.centerIn: parent
                text: "Click me!"
                font.pointSize: 18
            }
        }
    }
}
