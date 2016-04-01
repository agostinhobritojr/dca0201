#include "equipamento.h"
#include <cstring>
#include <iostream>

using namespace std;

Equipamento::Equipamento(){
  cout << "const equipamento\n";
}

Equipamento::~Equipamento(){
  cout << "dest equipamento\n";
}

void Equipamento::setNome(const char *_nome){
  strncpy(nome,_nome,99);
}

void Equipamento::setFabricante(const char *_fabricante){
  strcpy(fabricante,_fabricante);
}

void Equipamento::setPreco(float _preco){
  preco=_preco;
}

char* Equipamento::getNome(void){
  return nome;
}

char* Equipamento::getFabricante(void){
  return fabricante;
}

float Equipamento::getPreco(void){
  return preco;
}

