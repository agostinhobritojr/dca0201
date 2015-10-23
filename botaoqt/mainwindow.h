#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogvalue.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private:
  Ui::MainWindow *ui;
  // estabeleca variaveis de classe para
  // os dialogos quando for necessario que
  // seus campos permanecam inalterados em
  // sucessivas chamadas do dialogo
  DialogValue d;

public slots:
  void mataTudo();
  void copiaTexto();
};

#endif // MAINWINDOW_H
