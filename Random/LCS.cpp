#include <stdio.h>
#include <string.h>

#define MAXF 1010
#define max(A,B) ((A)>(B)?(A):(B))

//Globais--------------
int TABELA[MAXF][MAXF];
//---------------------

int lcs(char *frase1, char *frase2){// retorno tamanho da LCS e preparo-me para achá-la
	int tamanho1, tamanho2; //tamanho das strings
	int i,j;//contadores e auxiliar
	
	tamanho1=strlen(frase1);
	tamanho2=strlen(frase2);
	memset(TABELA,0,sizeof(TABELA));//zero tabela para evitar erros
	
	for(i=1;i<=tamanho1;i++)
	for(j=1;j<=tamanho2;j++){
		if(frase1[i-1]==frase2[j-1]){//se iguais
			TABELA[i][j]=TABELA[i-1][j-1] + 1;
		}
		else{
			TABELA[i][j]=max(TABELA[i-1][j],TABELA[i][j-1]);
		}
	}
	
	return TABELA[tamanho1][tamanho2];
}

int main(){
	char frase1[MAXF];
	char frase2[MAXF];
	
	while( gets(frase1)!=NULL && gets(frase2)!=NULL ){
	    printf("%d\n",lcs(frase1,frase2) );
	}
	
	return 0;
} 
