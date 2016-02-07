#include <stdio.h>

using namespace std;

int main(){
	int n, ent;
	scanf("%d", &n);
	int vet[n];
	for(int i = 0; i < n; i++){
			  scanf("%d",&vet[i]);	
	} 
	int time = n;
	scanf("%d", &n);
	int vet2[n];
	
	for(int i = 0; i < n; i++){
		  scanf("%d",&vet2[i]);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < time; j++){
			if(vet2[i] == vet[j]){
				vet[j] = -1;
				break;
			}
		}
	}
	
	for(int i = 0; i < time; i++){
		if(vet[i]!=-1){
			printf("%d ",vet[i]);
		}
	}


	printf("\n");
	return 0;
}