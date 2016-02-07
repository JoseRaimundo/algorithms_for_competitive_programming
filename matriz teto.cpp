#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	double mat[13][13];
	double soma = 0, ent;
	char c;
	bool chave = true, chaveFinal = true;;
	
	cin >> c;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> ent;
		
			if(j == i){
				chave = true;
			}else{
				if(j+i==11){
					chave = false;
				}else if (chave == true && chaveFinal){
					soma += ent;
				}
			}	if(i==4 && j == 6){
				chaveFinal = false;
			}
		}
	}
	
	//30
	if(c == 'S'){
		printf("%.1f\n", soma);
	}else{
		soma  = soma/30;
		printf("%.1f\n", soma);
	}
	
	
	
	return 0;
}