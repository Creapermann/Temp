#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "book_controller.hpp"
#include "qqml.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    
    adapters::BookController controller;
    qmlRegisterSingletonInstance("MyTest.controllers", 1, 0, "BookController", &controller);
    
    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);
    
    return app.exec();
}
