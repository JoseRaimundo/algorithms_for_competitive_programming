#include <stdio.h>
#include <stdlib.h>

#define MAXN    1005
#define MAXPESO 1005
#define max(A,B) ((A)>(B))?(A):(B)

// Globais----------------------------------
int n;//numero de objetos
int peso[MAXN],valor[MAXN];//peso e valor dos objetos
int tabela[MAXN][MAXPESO];//tablea da PD
//------------------------------------------

int knapsack(int objeto,int peso_restante){
    
    if(objeto > n) return 0;//base, já tentei colocar todos os objetos na mochila
    if(tabela[objeto][peso_restante]!=-1) return tabela[objeto][peso_restante];//PD, evito recálculo se já foi calculado
    
    int coloca, nao_coloca;
    
    if(peso[objeto] <= peso_restante) coloca=knapsack(objeto+1, peso_restante-peso[objeto]) + valor[objeto];// se o objeto cabe na mochila, coloco
    else coloca=0;//se nao cabe, nao ponho
    
    nao_coloca=knapsack(objeto+1, peso_restante);//vejo como seria se nao o colocasse
    
    tabela[objeto][peso_restante]=max(coloca,nao_coloca);//uso a tentativa que fornece melhor resposta, colocar ou não esse objeto
    return tabela[objeto][peso_restante]; //PD, guardo resultado na tabela
}

int main(){
    int peso_mochila;
    
    scanf("%d %d",&n,&peso_mochila); //leio numero de objetos
    
    for(int i=1;i<=n;i++)//inicilizo tabela da PD
    for(int j=0;j<=peso_mochila;j++) tabela[i][j]=-1;
    
    for(int i=1;i<=n;i++) scanf("%d %d",&valor[i],&peso[i]);
    
    printf("%d\n", knapsack(1,peso_mochila) );//P. Dinâmica - Problema da Mochila
    
    return 0;
}

/* Caso de teste

ENTRADA:
        
40 200

10 20
8 14
3 5
2 4
10 20
8 14
3 5
2 4
10 20
8 14
3 5
2 4
10 20
8 14
3 5
2 4
10 20
8 14
3 5
2 4
10 20
8 14
3 5
2 4
10 20
8 14
3 5
2 4
10 20
8 14
3 5
2 4
10 20
8 14
3 5
2 4
10 20
8 14
3 5
2 4

SAÍDA ESPERADA:

114

*/
