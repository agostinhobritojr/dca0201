#ifndef SENOIDE_H
#define SENOIDE_H

#include <QWidget>

class Senoide : public QWidget
{
  Q_OBJECT

private:
  float teta;

public:
  explicit Senoide(QWidget *parent = 0);
  void paintEvent(QPaintEvent *e);
  void timerEvent(QTimerEvent *e);
signals:

public slots:
};

#endif // SENOIDE_H
