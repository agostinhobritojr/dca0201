#include "matriz.h"

Matriz::Matriz(int _nlin, int _ncol){
  nlin = _nlin;
  ncol= _ncol;
  // aloca array de ponteiros auxiliares
  x = new float*[nlin];
  // aloca array para a matriz
  x[0] = new float[nlin*ncol];
  // ajusta os enderecos do array de
  // ponteiros auxiliares
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
}

