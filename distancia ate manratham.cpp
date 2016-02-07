#include <iostream>

using namespace std;

int main(){
	int a, b , c , d, x, y;
	cin >> a >> b >> c >> d;
	if(a > c){
		   x = a-c;  	
	}else{
			x = c-a;
	}
	if(b > d){
		   y = b-d;  	
	}else{
			y = d-b;
	}
	
	cout << x+y << endl;
	return 0;
}