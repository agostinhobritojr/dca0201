#ifndef SENOIDE_H
#define SENOIDE_H

#include <QWidget>

class Senoide : public QWidget
{
  Q_OBJECT
public:
  explicit Senoide(QWidget *parent = 0);

signals:

public slots:
  void setVarAngle(int var);
protected:
  void paintEvent(QPaintEvent *e);
  void timerEvent(QTimerEvent *e);

private:
  float Amp, Freq, Angle, varAngle;
};

#endif // SENOIDE_H
