#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
  int qtd = 0;
  int cont = 0, value = 0, i = 0, j = 0;
  int vetor[qtd];
  cin >> qtd;
  for(int i = 0; i < qtd; i++){
      cin >> vetor[i];
  }

  while(i < qtd){

      while(j < i+1){
         value += vetor[j];
         j++;
      }
      if((value % 8) == 0){
         cont++;
      }
      i++;

      if(i == qtd){
          i = 0;
          j -= qtd;
          qtd--;
      }
      value = 0;
  }


   printf("%d\n", cont);
  return 0;
}
