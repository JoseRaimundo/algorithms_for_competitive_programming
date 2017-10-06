#include <stdio.h>
#include <math.h>

#define max 10001

int main() {

	int i,N, K, m[max];
	int b, soma, maior=0;
	int min, ma=1, meio;
	int ant=0, antv=0;
	scanf("%d",&N);
	scanf("%d",&K);
	for(i=0; i < K; i++) {
		scanf("%d",&m[i]);
		if(m[i] > ma)
			ma = m[i];
	}
	b = ma/2;
	min = 1;
	while(1) {
		//printf("Verificando para b = %d\n",b);
		for(i=0; i < K; i++) {
			soma += m[i]/b;
		}
		
		//verificando se ja deu
		if(soma == N || (ma-min == 1) ) {
			b = min;
			while(1) {
				maior = b;
				b++;
				soma=0;
				for(i=0; i < K; i++) {
					soma += m[i]/b;
				}
				if(soma < N) {
					break;
				}
			}
			printf("%d",maior);
			return 0;	
		}	
		else if(soma < N) { //divide mais
			ma = b;
			b = (ma+min)/2;// - round((float)b/4.0);
		//	printf("Soma = %d\n",soma);
		//	printf("1 - Max = %d Meio = %d Min = %d",ma,b, min);
		}
		else if(soma > N) { //divide menos
			min = b;
			b = (ma+min)/2;// - round((float)b/4.0);
			//printf("Soma = %d\n",soma);	
			//printf("2 - Max = %d Meio = %d Min = %d",ma,b,min);
		}
		soma=0;
	}
	

	return 0;
}


