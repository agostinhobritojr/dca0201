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
protected:
  void paintEvent(QPaintEvent *e);

private:
  float Amp, Freq, Angle;
};

#endif // SENOIDE_H
