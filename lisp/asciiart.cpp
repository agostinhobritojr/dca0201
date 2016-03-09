#include <stdio.h>
#include <stdlib.h>

char map[256]=".\'`,^:\";~-_+<>i!lI?/\\|()1{}[]rcvunxzjftLCJUYXZO0Qoahkbdpqwm*WMB8&%$#@";

#define PAGE 23

int main(int argc, char *argv[]){
  FILE *f, *fout;
  char *lixo;
  int **imgr, **imgg, **imgb;
  int i, j, nl, nc, max;
  unsigned long int tam;
  tam = 254;
  lixo = (char*) malloc(tam+1);
  
  f = fopen(argv[1],"r");
  getline(&lixo,&tam,f);
  //printf("%s\n",lixo);
  getline(&lixo,&tam,f);
  //printf("%s\n",lixo);
  fscanf(f,"%d %d",&nc, &nl);
  //printf("imagem com %d colunas e %d linhas\n", nc, nl);

  max = nc;
  if(nl > max)
	max = nl;

  fscanf(f,"%ld",&tam);
  
  // aloca r
  imgr = (int**) malloc(nl *sizeof(int*));
  if(imgr == NULL){
    printf("imagem nao alocada\n");
    exit(0);
  }
  for(i=0; i<nl; i++){
    imgr[i] = (int*) malloc(nc *sizeof(int));
    if(imgr[i] == NULL){
      printf("imagem nao alocada\n");
      exit(0);
    }
  }

  // aloca g
  imgg = (int**) malloc(nl *sizeof(int*));
  if(imgg == NULL){
    printf("imagem nao alocada\n");
    exit(0);
  }
  for(i=0; i<nl; i++){
    imgg[i] = (int*) malloc(nc *sizeof(int));
    if(imgg[i] == NULL){
      printf("imagem nao alocada\n");
      exit(0);
    }
  }

  // aloca b
  imgb = (int**) malloc(nl *sizeof(int*));
  if(imgb == NULL){
    printf("imagem nao alocada\n");
    exit(0);
  }
  for(i=0; i<nl; i++){
    imgb[i] = (int*) malloc(nc *sizeof(int));
    if(imgb[i] == NULL){
      printf("imagem nao alocada\n");
      exit(0);
    }
  }

  // lê as três matrizes
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      fscanf(f,"%d %d %d", &imgr[i][j], &imgg[i][j], &imgb[i][j]); 
    }
  }

  // imprime a imagem de saída
  fout = fopen(argv[2],"w");
  if(max == nc){
	fprintf(fout,"\\documentclass[a4paper, landscape]{report} \n");
  }
  else{
	fprintf(fout,"\\documentclass[a4paper]{report} \n");
  }  
  fprintf(fout,"\\usepackage{geometry}\n"
		  "\\usepackage{tikz}\n"
		  "\\geometry{left=1cm, right=1cm, top=1cm, bottom=1cm}\n" 
		  "\\pagestyle{empty}\n" 
		  "\\begin{document}\n" 
		  "\\begin{tikzpicture}\n"); 
  
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      tam = (imgr[i][j]+imgg[i][j]+imgb[i][j])/3;
	  printf("%ld ", tam);
	  if(tam < 240){
	  fprintf(fout,
			  "\\definecolor{cor}{rgb}{%.2f,%.2f,%.2f}\n",
			  (float)imgr[i][j]/255,
			  (float)imgg[i][j]/255,
			  (float)imgb[i][j]/255);
      fprintf(fout,
			  "\\fill[color=cor] (%.2f,%.2f) circle(%.2fcm);\n",
			  (float)j/nc*PAGE, nl-(float)i/nc*PAGE, (float)PAGE/(2*max)*(1.5-(float)tam/255)); 
    }
  }
  }
  fprintf(fout, "\\end{tikzpicture}\n"
		  "\\end{document}");
}
