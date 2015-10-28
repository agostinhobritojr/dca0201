#ifndef SENOIDE_H
#define SENOIDE_H

#include <QWidget>

class Senoide : public QWidget
{
  Q_OBJECT

private:
  float teta;
  float deltaTeta;
public:
  explicit Senoide(QWidget *parent = 0);
  void paintEvent(QPaintEvent *e);
  void timerEvent(QTimerEvent *e);
signals:

public slots:
  void mudaVelocidade(int _deltaTeta);
};

#endif // SENOIDE_H
