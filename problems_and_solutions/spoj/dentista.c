/*
OBI 2010
PJ - 2a fase
Problema - Dentista
por Felipe Holanda
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXN 10005

typedef struct{ //estrutura que utilizarei para guardar os horarios dos paciente
        int inicio;
        int fim;    
}paciente;

paciente consulta[MAXN];//vetor com todas as consultas do dia 

int compara(const void *x, const void *y){//ordem crescente por fim de consulta   
    
    //ordeno baseado no fim da consulta
    if( ((paciente *)x)->fim > ((paciente *)y)->fim ) return 1;
    if( ((paciente *)x)->fim < ((paciente *)y)->fim ) return -1;
    
    //em caso de empate, olho o inicio da consulta
    if( ((paciente *)x)->inicio > ((paciente *)y)->inicio ) return 1;
    if( ((paciente *)x)->inicio < ((paciente *)y)->inicio ) return -1;
    
    return 0;
}

int main(){
    
    int n;

    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        
        consulta[i].inicio=a;
        consulta[i].fim=b;
    }
    
    qsort(consulta,n,sizeof(paciente),compara);//ordeno consultas, por horario de fim primeiro
                                               //e depois por horario de início                 
    
    int r = 1;
    int j = 0;
    for(int i = 1; i < n; i++)//essa parte é a idéia principal, execute com um papel e você entenderá melhor como funciona
        if (consulta[i].inicio >= consulta[j].fim)
        {
            r++;
            j = i;
        }
    printf("%d\n",r);

    return 0;
}
