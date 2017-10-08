#include <cstdio>
#include<algorithm>

using namespace std;
int main(){
	int n = 5;
	int vet[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&vet[i]);
	}
	sort(vet, vet+n);//vetor ordenado
	for(int i = 0; i < n; i++){
		printf("%d\n", vet[i]);
	}
	
	
	return 0;
}