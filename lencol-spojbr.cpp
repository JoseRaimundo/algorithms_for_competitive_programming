#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
	int a, b, a1, b1, a2, b2;

bool verifica(){
		  if(a1+a2 >= a && b1 >= b && b2 >= b){
		return true;
	}else if(a1+a2 >= b && b1 >= a && b2 >= a){
		return true;
	}else if(b1+b2 >= a && a1 >= b && a2 >= b){
		return true;
	}else if(b1+b2 >= b && a1 >= a && a2 >= a){
		return true;
	}else if(b1+a1 >= a && a2 >= b && b2 >= b){
		return true;
	}else if(b1+a1 >= b && a2 >= a && b2 >= a){
		return true;
	}else if(b1+a2 >= a && b2 >= b && a1 >= b){
		return true;
	}else if(b1+a2 >= b && b2 >= a && a1 >= a){
		return true;
	}else if(b2+a1 >= a && b1 >= b && a2 >= b){
		return true;
	}else if(b2+a1 >= b && b1 >= a && a2 >= a){
		return true;
	}else if(b2+a2 >= a && b1 >= b && a1 >= b){
		return true;
	}else if(b2+a2 >= b && b1 >= a && a1 >= a){
		return true;
	}else if(a1 >= a && b1>=b || b1 >= a && a1 >= b){
		return true;
	}else if(a2 >= a && b2>=b || b2 >= a && a2 >= b){
		return true;
	}else{
		return false;
	}
}

int main() {

	cin >> a1 >> b1 >> a2 >> b2 >> a >> b;
	if(verifica()){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}