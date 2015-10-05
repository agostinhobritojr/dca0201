#include "matriz.h"

Matriz::Matriz(int _nlin=0, int _ncol=0){
  nlin = _nlin; ncol = _ncol;
  if(nlin == 0 || ncol == 0){
    x = 0;
    return;
  }
  // aloca array auxiliar
  x = new float*[_nlin];
  // aloca matriz...
  x[0] = new float[nlin*ncol];
  // reorganiza os enderecos das linhas
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
}

Matriz::~Matriz(){
  if(x != 0){
    if(x[0] != 0){
      delete [] x[0];
    }
    delete [] x;
    x = 0;
  }
}











