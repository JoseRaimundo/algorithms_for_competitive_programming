#include <iostream>

using namespace std;

bool verifica(int a, int b, int c){
	if(a+b > c && a + c > b && c + b > a){
		return true;
	}else{
		return false;
	}
}

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(verifica(a,b,c)){
		cout<< "S" << endl;
	}else if(verifica(a,b,d)){
		cout<< "S" << endl;
	}else if(verifica(a,c,d)){
		cout<< "S" << endl;
	}else if(verifica(c,b,d)){
		cout<< "S" << endl;
	}else {
		cout << "N" << endl;
	}
	
	
	return 0;
}