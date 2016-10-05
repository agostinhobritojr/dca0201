#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
public:
  FiguraGeometrica();
  // classes que contenham pelo menos
  // uma funcao virtual pura sao chamadas
  // classes abstratas
  //
  // funcao virtual pura
  virtual void pos(void)=0;
};

#endif // FIGURAGEOMETRICA_H
