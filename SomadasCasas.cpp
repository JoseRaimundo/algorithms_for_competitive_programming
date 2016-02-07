#include <iostream>

using namespace std;

int main(){
	int tot, casa, soma;
	cin >> tot;
	int vet[tot+1];
	
	for(int i = 0; i < tot; i++){
		cin >> vet[i];
	}
	
	cin >> soma;
	int cont = 0;
	while(true){
	for(int i = cont; i < tot; i++){
		if(vet[cont]+vet[i] == soma){
			
		}else if(vet[cont]+vet[i]>  soma){
			cont++;
			break;
		}
		
	}
	}
	
	
	return 0;
}