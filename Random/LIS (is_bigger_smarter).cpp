#include <stdio.h>
#include <stdlib.h>
#define MAXEL 1005  // máximo de elefantes

//GLOBAIS---------------------//
typedef struct{               //
        int peso;             //
        int qi;               //
        int indice;           //
        int em_cima;          //
}tipo_elefante;               //
tipo_elefante elefante[MAXEL];//
int pai[MAXEL];               //
//----------------------------//

void quem_eh_pai(int raiz){

     if(pai[raiz]!=raiz){
       quem_eh_pai(pai[raiz]);
     }
     printf("%d\n",elefante[raiz].indice);
}

int compara(const void *x,const void *y){
    if( (*(tipo_elefante *)x).qi < (*(tipo_elefante *)y).qi ) return 1;
    if( (*(tipo_elefante *)x).qi > (*(tipo_elefante *)y).qi ) return (-1);
    return 0;
}

int main(){

    int i,j,n=0; //contadores e número de elefantes
    int maior,maiorzao=0,raiz; //auxiliares para LIS

    for(i=1; scanf("%d %d",&elefante[i].peso,&elefante[i].qi)==2 ;i++){
          n++;
          elefante[i].indice=i;
          elefante[i].em_cima=1;
          pai[i]=i;
    }

    qsort(&(elefante[1]),n,sizeof(tipo_elefante),compara); // ordeno os elefantes em ordem decrescente de qi

    /*Agora faço um LIS no peso dos elefantes*/

    for(i=1;i<=n;i++){
        maior=0;
        for(j=1;j<i;j++){
            if((elefante[j].peso < elefante[i].peso) && (elefante[j].qi > elefante[i].qi) && (elefante[j].em_cima >= maior)){
               maior=elefante[j].em_cima;
               pai[i]=j;
            }
        }

        elefante[i].em_cima+=maior;
        if(elefante[i].em_cima > maiorzao){
             maiorzao=elefante[i].em_cima;
             raiz=i;
        }
    }

    printf("%d\n",maiorzao);
    quem_eh_pai(raiz);
}
