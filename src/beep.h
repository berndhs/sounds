#ifndef BEEP_H
#define BEEP_H

#include <QObject>
#include <QSound>

class Beep : public QObject
{
  Q_OBJECT
public:
  explicit Beep(QObject *parent = 0);

  void beep();

signals:

public slots:

private:

  QSound snd;

};

#endif // BEEP_H
