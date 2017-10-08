#include <iostream>


using namespace std;

int main(){
	int  y, x, A, a, B, b;
	cin >> y >> x >> A >> a >> B >> b;
	char res = 'N';
	
	if(y >= A+B){
		if(x >= a && x >= b){
			res = 'S';
		}
	}
	if(y >= A+b){
		if(x >= B && x >= a){
			res = 'S';
		}
	}
	if(y >= B+a){
		if(x >= A && x >= b){
			res = 'S';
		}
	}
	if(y >= a+b){
		if(x >= B && x >= A){
			res = 'S';
		}
	}	
	
	cout << res << endl;
	
	
	
	return 0;
}