#ifndef SENOIDE_H
#define SENOIDE_H

#include <QWidget>

class Senoide : public QWidget
{
  Q_OBJECT
public:
  explicit Senoide(QWidget *parent = 0);
  void paintEvent(QPaintEvent *e);
signals:

public slots:
};

#endif // SENOIDE_H
