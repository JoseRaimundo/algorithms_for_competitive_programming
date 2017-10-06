#include<stdio.h>
#include<stdlib.h>


int main(){
	int ini[25],fim[25], n, t;
	int i,j,k;
	int saida=0;
	while(scanf("%d",&n)!= EOF){
		saida=0;
		for(i=0;i<n;i++){
			scanf("%d",&ini[i]);	
		}
		for(i=0;i<n;i++){
			scanf("%d",&fim[i]);
		}
	
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				if(fim[i] == ini[j]){
					if(i==j)
						break;
					saida = saida + (j-i);
					for(k=j;k>=i;k--){
						ini[k]=ini[k-1];
					}
					ini[i] = fim[i];
					break;
				}
			}
		}
		printf("%d\n",saida);
	}
	return 0;



}