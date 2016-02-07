#include <stdio.h>
using namespace std;
int main(){
	int x, n;
	
	scanf("%d", &n);
	int vet[n+1];
	
	for(int i = 0; i < n+1; i++){
		vet[i]=0;
	}
	for(int i = 0; i < n-1; i++){
		scanf("%d",&x);
		vet[x] = 1;
	}
	
	for(int i = 1; i < n+1; i++){
		if(vet[i]!=1){
			printf("%d\n",i);
		}
	}
	
	return 0;
}