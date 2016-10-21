#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget{
  Q_OBJECT
private:
  int veloc;
  float ampl, freq;
  float teta;

public:
  explicit Plotter(QWidget *parent = 0);

  void paintEvent(QPaintEvent *e);
signals:

public slots:
  void setAmplitude(int ampl);
  void setFrequencia(int freq);
};

#endif // PLOTTER_H
