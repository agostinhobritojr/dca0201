// declaracao da classe
#ifndef VETOR_H
#define VETOR_H
class Vetor{
  // somente funcoes da classe podem acessar
private:
  float x, y;
  // usuarios externos da classe podem acessar
public:
  // funcoes, funcoes-membro, metodos

  // Vetor() eh um construtor da classe
  // Vetor.
  // O construtor que eh declarado sem
  // parametros eh o construtor default
//  Vetor();

  // construtor com argumentos
  // os argumentos devem ser definidos
  // no arquivo de header
  Vetor(float mx=0, float my=0);

  // destrutor da classe
  ~Vetor();

  // construtor de copia
  Vetor(Vetor &v);

  // guarda na variavel x da classe
  // o valor fornecido atraves da variavel
  // mx
  void setX(float mx);

  // recupera o valor de x e retorna para
  // seu cliente
  float getX(void);

  void setY(float my);
  float getY(void);
  float modulo(void);

  // funcao soma
  Vetor soma(Vetor my);

  // sobrecarga da funcao soma
  Vetor soma(float a);

  float produto(Vetor my);
}; // <--- maligno
#endif // VETOR_H

