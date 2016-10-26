#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

public slots:
  void finaliza(void);
  void copiaTexto(void);
  void mostraLcd(int value);
  void mostraDialogo(void);

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
