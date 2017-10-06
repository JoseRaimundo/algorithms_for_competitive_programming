#include<stdlib.h>
#include<stdio.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main (){
	int n, res, vet[5001];
	while(true){
		scanf ("%d",&n);
		if(n==0){
		break;
		}
		for(int i = 0; i < n; i++){
			 scanf ("%d",&vet[i]);
		}
		int cont =0, maior = 0;
		
		qsort (vet, n-1, sizeof(int), compare);
		int temp = vet[0];
		for(int i = 0; i < n; i++){
			if(vet[i]==temp){
				cont++;
				if(cont>maior){
					maior=cont;
					res = i;
				}
			}else{		
				cont = 0;
				temp = vet[i];
			}
		}
		printf ("%d\n",vet[res]);	
		
	}
return 0;
}

 