#include <iostream>
#include <map>

using namespace std;

int main(){
	map<int, int> mapa;
	int n, temp, res, cont = 0, maior = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		cont = mapa[temp];
		mapa[temp] = cont + 1;
		if(mapa[temp] > maior){
			maior = mapa[temp];
			res = temp;
		} 	
	}
	cout << res << endl;
	return 0;
}