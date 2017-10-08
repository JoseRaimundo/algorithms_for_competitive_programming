#include <iostream>

using namespace std;

struct no{
	int dado;
	struct no *prox;
};

typedef struct  no no;

int main(){
	no *P, *Q, *R;
	int soma;
	P = new no;
	P->dado = 70;
	Q = new no;
	Q->prox = P;
	soma = P->dado;
	R = new no;
	Q->dado = 15;
	Q->prox->prox = R;
	R->dado = 43;
	soma = soma+P->prox->dado - Q->dado;
	cout << soma;

	return 0;
}