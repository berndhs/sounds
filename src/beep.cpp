#include "beep.h"
#include <QDebug>
#include <QSound>

Beep::Beep(QObject *parent) : QObject(parent),
  snd("wavs/beep.wav")
{
  qDebug() << Q_FUNC_INFO;
  snd.setLoops(2);

}

void Beep::beep()
{
  snd.play();
}
