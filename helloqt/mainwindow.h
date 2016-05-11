#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
/**
 * @brief The MainWindow class permite criar uma
 * janela e mostrar componentes na tela
 *
 * @details Ela possui uma série de funcionalidades
 * que incluem menus, etc, etc e etc
 */
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  /**
   * @brief MainWindow eh a classe principal
   * @param parent eh um ponteiro para Qwidget
   * que indica onde a mainwindow serah desenhada
   */
  explicit MainWindow(QWidget *parent = 0);

  /**
    * @brief ~MainWindow() eh o destrutor da classe
    */

  ~MainWindow();

private:
  /**
   * @brief ui eh o ponteiro para o componente principal
   */
  Ui::MainWindow *ui;

public slots:
  /**
   * @brief finaliza mata a janela principal
   */
  void finaliza();

  /**
   * @brief copiaTexto copia o texto de um componente
   * para outro
   *
   * @details Util para copiar textos de um componente para outro
   * Faz três coisas:
   * <ul>
   *   <li> copia texto </li>
   *   <li> realiza copias </li>
   *   <li> ctrl+c - ctrl+v </li>
   * </ul>
   * Otimo para calcular integrais do tipo
   * \f$ \int_a^b f(x) dx \f$
   */
  void copiaTexto();
  void editConfig();

};

#endif // MAINWINDOW_H












