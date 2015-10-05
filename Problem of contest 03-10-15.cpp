#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		int a = 0, b = 0,ent = 0;
		for(int i = 0; i < n*n; i++){
				cin >> ent;
				if(ent%2 == 0 && ent!=0){
					a++;
				}else if(ent%2 == 1 && ent !=0){
					b++;
				}
		}
		if(a == 0 && b == 0){
			cout << "Sem bolas :(" << endl;
		}else if(a == b){
			cout << "Bora jogar :)" << endl;
		}else{
			cout << "Trapaceiro ¬¬" << endl;
		}
	}
	return 0;
}