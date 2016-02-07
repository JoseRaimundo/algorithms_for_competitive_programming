#define MAXVERTICES 100;
#define MAXARESTAS 4500;

typedef int tipoVertice;
typedef int tipoPeso;
typedef struct  tipoGrafo{
	tipoPeso Mat[MAXVERTICES+1][MAXVERTICES+1];
	int numVertices;
	int numArestas;
}tipoGrafo;

typedef int tipoApontador;

void VGVazio(tipoGrafo *grafo){
	short i, j;
	for(int i = 0; i <= grafo->numVertices ; i++){
		for(int j = 0; j <= grafo->numVertices; j++){
			grafo->Mat[i][j] = 0;
			
		}	
	}
}

void insereAresta(tipoVertice *v1, tipoVertice *v2, tipoPeso *peso, tipoGrafo *grafo){
	grafo->Mat[*v1][*v2] = *peso;
}

short existeAresta(tipoVertice v1, tipoVertice v2, tipoGrafo *grafo){
	return (grafo->Mat[v1][v2]>0);
}


//operadores para obter a lista de adjacentes

short listaAdjVazia(tipoVertice *vertice, tipoGrafo *grafo){
	tipoApontador aux = 0;
	short listaVazia = true;
	while(aux < grafo->numVertices && listaVazia){
		if(grafo->Mat[*vertice][aux] > 0){
			listaVazia = false;
		}else{
			aux++;
		}
		return (listaVazia == true);
	}
}

tipoApontador primeiroDaListaAdj(tipoVertice *vertice, tipoGrafo *grafo){
	tipoVertice result;
	tipoApontador aux = 0;
	short listavazia = true;
	while(aux < grafo->numVertices && listavazia){
		if(grafo->Mat[*vertice][aux]>0)	{
			result = aux;
			listavazia = false;
		}else{
			aux++;
		}
	}
	
	if(aux == grafo->numVertices){
		printf("Erro: lista adjacencia vazia\n");
	}
	return result;
}


void proxAdj(tipoVertice *vertive, tipoGrafo *grafo, tipoVertice *adj, tipoPeso *peso, tipoApontador *prox, short *fimlistaadj){
	//retornar adj apontado por prox
	*adj = *prox;
	*peso = grafo->Mat[*vertive][*prox];
	(*prox)++;
	while(*prox < grafo->numVertices && grafo->Mat[*vertive][*prox] == 0){
		(*prox)++;		
	}
	if(*prox == grafo->numVertices){
		*fimlistaadj = true;
	}
}
































