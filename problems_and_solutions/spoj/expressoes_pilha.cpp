#include <iostream>
#include <string.h>


using namespace std;

typedef struct {
	int topo;
	char vet[100];
}pilha;


void criarP(pilha *p){
	p->topo = 0;
}

void push(pilha *p, char v){
	if(p->topo < 100){
		p->vet[p->topo] = v;
		p->topo++;
	}
}

char pop(pilha *p){
	char ret =' ';//lembrar de preencher ret
	if(p->topo > 0){
		ret = p->vet[p->topo-1];
		p->topo--;
	}
	return ret;
}



int main() {	

		int repete;	
		string entrada;
		cin >> repete;
		pilha p;
		for (int j = 0; j < repete; j++) {
			criarP(&p);
			cin >> entrada;
			
			if (entrada.size()%2!=0) {
 				cout << "N" << endl;
				continue;
			}
			
			
			for (int i = 0; i < entrada.size(); i++) {
				if (entrada[i]=='}' && p.vet[p.topo-1]=='{'){
					pop(&p);
				}else if (entrada[i]==']'&& p.vet[p.topo-1]=='['){
					pop(&p);
				} else if (entrada[i]==')'&& p.vet[p.topo-1]=='('){
					pop(&p);
				}else{
					push(&p,entrada[i]);
				}		
			}
			if (p.topo==0) {
				cout << "S" << endl;
			}else{
				cout << "N" << endl;
			}
		}
	return 0;
	
}

