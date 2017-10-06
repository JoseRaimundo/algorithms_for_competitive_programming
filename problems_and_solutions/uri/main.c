#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct names{
    char nome[21];
    char c[21];
    int nota;
}values;

void placar(values nome[], int *qtd){

  int i, j, m = sizeof(int*), d1, d2;
  for(i = 0; i < *qtd; i++){
     scanf("%s %d", &nome[i].nome, &nome[i].nota);
     if(nome[i].nota < m){
        m = nome[i].nota;
        strcpy(nome[0].c, nome[i].nome);
     } else if(nome[i].nota == m){
        printf("1\n");
        for(j = 0; j < strlen(nome[i].nome); j++){
          d1 = nome[0].c[j];
          d2 = nome[i].nome[j];
          if(d1 < d2){
            strcpy(nome[0].c, nome[i].nome);
            break;
          } else if(d2 < d1){
            break;
          }
        }
     }
  }

}

int main(){

values nome[100];
int qtd = 0, i = 0, c = 0;
char n;
  while(scanf("%c", &n) != EOF){
     qtd = atoi(n);
     c++;
     placar(nome, &qtd);
     printf("Instancia %d\n", c);
     printf("%s\n\n", nome[0].c);

  }
  return 0;
}
