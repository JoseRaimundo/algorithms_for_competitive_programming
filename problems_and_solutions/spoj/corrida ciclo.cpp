#include <iostream>

using namespace std;

int main(){
	
	
	int long long a, b;
	int cont = 0;
	cin >> a >> b;
	
	while(true){
		if(a%b==0){
			break;
		}
		a--;
		cont++;
	}
	cout << cont << endl;
	return 0;
}