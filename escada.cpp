#include <stdio.h>

using namespace std;

int main(){
	
	int n, m, cont = 0, maior = -1;
	char res = 'S';
	scanf("%d %d", &n, &m);
	int mat[n][m];
	bool test = true;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
		scanf("%d", &mat[i][j]);
			if(mat[i][j]==0 && test){
			cont++;
			}else{
			test = false;
			}	
		}
		
		if(cont <= maior && cont != m){
			res = 'N';
		}else{
			maior = cont;
		}
		cont = 0;
		test = true;
	}
	
		
	printf("%c\n", res);
	
	
	
	
	
	
	
	return 0;
}