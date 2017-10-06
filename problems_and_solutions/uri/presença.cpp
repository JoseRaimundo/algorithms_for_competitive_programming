#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
	int n,cont =1;
	scanf("%d",&n);
	int vet[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &vet[i]);
	}
	sort(vet, vet+n);	
	int temp = vet[0];
	for(int i = 1; i < n; i++){
		if(temp!=vet[i]){
			temp = vet[i];
			cont++;
		}
	}
	printf("%d\n", cont);
	return 0;
}