#include <stdio.h>
int n, a;
long long c[8];
int main(){	
	scanf("%d",&n);
	int soma = 0;
	c[0] = 1;
	while(n--) {
		scanf("%d", &a);
		soma = (soma + a) % 8;
		c[soma]++;
	}
	long long ans = 0;
	for (int i = 0; i < 8; i++) {
		ans += c[i]*(c[i]-1)/2;
	}
	printf("%lld", ans);
}
