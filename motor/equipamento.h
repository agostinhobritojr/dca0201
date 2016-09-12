#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento{
private:
  // propriedades e funcoes "protected"
  // somente podem ser acessadas pela classe e pelas
  // suas herdeiras
protected:
  char nome[100];
  char fabricante[100];
  float preco;
public:
  Equipamento();
  ~Equipamento();
  void setNome(const char *_nome);
  void setFabricante(const char *_fabricante);
  void setPreco(float _preco);
  char* getNome(void);
  char* getFabricante(void);
  float getPreco(void);
};

#endif // EQUIPAMENTO_H
