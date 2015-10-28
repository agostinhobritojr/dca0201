#ifndef SENOIDE_H
#define SENOIDE_H

#include <QWidget>

class Senoide : public QWidget
{
  Q_OBJECT

private:
  float teta;
  float deltaTeta;
  float frequencia;
  float amplitude;
public:
  explicit Senoide(QWidget *parent = 0);
  void paintEvent(QPaintEvent *e);
  void timerEvent(QTimerEvent *e);
  void mousePressEvent(QMouseEvent *e);
signals:
  void meuX(QString);
public slots:
  void mudaVelocidade(int _deltaTeta);
  void mudaFrequencia(int _frequencia);
  void mudaAmplitude(int _amplitude);
};

#endif // SENOIDE_H
