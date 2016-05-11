#ifndef SENOIDE_H
#define SENOIDE_H

#include <QWidget>

class Senoide : public QWidget
{
  Q_OBJECT
public:
  explicit Senoide(QWidget *parent = 0);

  /**
   * @brief jose
   * @param x recebe o valor de uma frequencia
   * @return o valor da frequencia + 1
   */
  int jose(int x);
signals:

public slots:
  void setVarAngle(int var);
  void setAmp(int a);
  void setW(int w);
protected:
  void paintEvent(QPaintEvent *e);
  void timerEvent(QTimerEvent *e);
  void mouseMoveEvent(QMouseEvent *e);

signals:
  int posx(int);
  int posy(int);

private:
  float Amp, Freq, Angle, varAngle;
};

#endif // SENOIDE_H
