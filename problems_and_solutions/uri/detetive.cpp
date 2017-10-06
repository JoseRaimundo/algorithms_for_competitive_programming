#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	while(true){
		cin >> n;
		if(n == 0){
			break;
		}
		int vet[n];
		int mat[n], res;
		for(int i = 0; i < n; i++){
			cin >> vet[i];
			mat[i] = vet[i];
		}
		sort(vet, vet+n);
		for(int i = 0; i < n; i++){
			if(mat[i]==vet[n-2]){
				res = i;
				break;
			}
		}
		cout << res+1 << endl;
		
	}
}