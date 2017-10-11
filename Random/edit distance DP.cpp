#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXP 1005
#define min(A,B) ((A)<(B))?(A):(B)

int TABELA[MAXP][MAXP];

int edit(int a, int b, char *p1, char *p2){
    
    if(a==-1) return b+1; //deleto o resto da outra palavra
    if(b==-1) return a+1; //deleto o resto da outra palavra
    
    if(TABELA[a][b]!=-1) return TABELA[a][b];
    
    if(p1[a]==p2[b]) TABELA[a][b]=edit(a-1,b-1,p1,p2); //se forem iguais, nao há custo envolvido
    
    else{//precisa mudar alguma coisa, testo as três possibilidades
    
        int aux1 = edit(a-1,b,p1,p2)+1;   //deleta
        int aux2 = edit(a,b-1,p1,p2)+1;   //inseri
        int aux3 = edit(a-1,b-1,p1,p2)+1; //troca
    
        TABELA[a][b]=min( aux1, min(aux2,aux3) ); //minimo entre as três operações
    }
    
    return TABELA[a][b];
}

int main(){
    
    char p1[MAXP],p2[MAXP];
    
    scanf("%s %s",&p1,&p2);
    
    for(int i=0;i<MAXP;i++)
    for(int j=0;j<MAXP;j++)
        TABELA[i][j]=-1;
    
    printf("%d\n",edit(strlen(p1)-1,strlen(p2)-1,p1,p2));
        
    return 0;
}
