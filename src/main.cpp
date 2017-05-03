#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "beep.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  QGuiApplication app(argc, argv);

  Beep bp;

  QQmlApplicationEngine engine;
  engine.load(QUrl(QLatin1String("qrc:/main.qml")));
  bp.beep();

  int r = app.exec();

  bp.beep();
  sleep(2);
  return r;
}
