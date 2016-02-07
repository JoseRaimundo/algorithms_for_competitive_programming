#include <iostream>

using namespace std;
int vet[5001];
int main(){
	while(true){
	int n, temp, cont=0,res, maior =0;
	cin >> n;
	if(n==0)break;
	int time[n+1];
	for(int f = 0; f < n; f++){
		cin >> temp;
		for(int i = 0; i < n; i++){
			if(vet[i]==temp){
				time[i] += vet[0]+1;
				if(time[i]>maior){
					maior = maior;
					res = temp;
				}
				temp = 0;
				break;
			}
		}
		if(temp!= 0){
			vet[f] = temp;
		}
	}
	
	cout << res <<endl;
	
	}
	return 0;
}