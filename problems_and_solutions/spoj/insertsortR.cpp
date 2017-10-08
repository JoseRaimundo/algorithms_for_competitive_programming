#include <iostream>

using namespace std;

	void insert(int* v, int t, int x){ 
	int j;
	    for (j = t; j > 0 && x < v[j - 1]; j--){ //desloca elementos  no vetor se necessário
			v[j] = v[j-1];
		}
			v[j] = x; // insere agora
		
			for (int i = 0; i < t+1; i ++){
				cout << v[i] << " ";
			}
	  		cout << " Inseriu no indice: " << j << endl; // retorna a posição em que inseriu
	}
		
	
int main(){
	   	
	int num, tamanho = 5;
	cout << "Informe o tamanho do vetor: " << endl;
	cin >> tamanho;
	int vet[tamanho];
	cout << "Insira os elementos do vetor: " << endl;
	for(int i = 0; i < tamanho; i++){
		cin >> num;
		insert(vet, i, num);
	}
			
	
return 0;
}