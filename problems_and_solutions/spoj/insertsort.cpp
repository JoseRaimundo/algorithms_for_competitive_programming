#include <iostream>

using namespace std;

	void insert(int* vet, int t){
		int chave, j;
		for(int i = 1; i < t; i++){
			chave = vet[i];
			j = i-1;
			while(chave<vet[j] && j >= 0){
				vet[j+1] = vet[j];
				j = j-1;
			cout << "entro " ;
			}	
			vet[j+1] = chave;
		}

	}
	
	
int main(){
	   	
	int num, tamanho = 5;
	int vet[tamanho];
	for(int i = 0; i < tamanho; i++){
		cin >> vet[i];
	}
	insert(vet, tamanho);	
	
return 0;
}