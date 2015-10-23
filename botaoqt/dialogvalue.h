#ifndef DIALOGVALUE_H
#define DIALOGVALUE_H

#include <QDialog>

namespace Ui {
class DialogValue;
}

class DialogValue : public QDialog
{
  Q_OBJECT

public:
  explicit DialogValue(QWidget *parent = 0);
  ~DialogValue();
  // retorna o valor armazenado no lineEdit
  QString getValor();

private:
  Ui::DialogValue *ui;
  QString valor;
};

#endif // DIALOGVALUE_H
