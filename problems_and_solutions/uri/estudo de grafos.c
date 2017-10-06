#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"


//aquivo grafo.h
typedef struct grafo Grafo;





struct Grafo{
	int eh_ponderado;
	int nro_vertice;
	int grau_max;
	int** arestas;
	float** pesos;
	int* grau;
};






Grafo* cria_Grafo(int nro_vertices, int grau_max, int eh_ponderado){
	Grafo *fr = (Grafo*) malloc(sizeof(struct grafo));//ver grafo com G
	if(gr != NULL){
		int i;
		gr->nro_vertices = nro_vertices;
		gr->grau_max = grau_max;
		gr->eh_ponderado = (eh_ponderado!=0) ?1:0;
		gr->grau=(int*)calloc(nro_vertices, sizeof(int));
		gr->arestas=(int**)malloc(nro_vertices*sizeof(int*));
		for(i = 0; i < nro_vertices; i++){
			gr->arestas[i]=(int*)malloc(grau_max*sizeof(int));
        }
        if(gr->eh_ponderado){
			gr->pesos=(float**)malloc(nro_verticesizeof(float*));
			for(i = 0; i < nro_vertices; i++){
				gr->pesos[i]=(float*)malloc(grau_max*sizeof(float));
				
			}	
		}
	}
	
	return qr;	
}






int main(int argc, char** argv){
	
	
	Grafo *cria_Grafo(int nro_vertices, int grau_max, int eh_ponderado);
	
	
	Grafo *gr;
	
	gr = cria_Grafo(10, 7, 0);
	
	
	
	system("pause");
	return 0;
}