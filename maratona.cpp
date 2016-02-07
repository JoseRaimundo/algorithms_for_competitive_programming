#include <iostream>

using namespace std;

int main(){
	int n, num;
	cin >> n >> num;
	char res = 'S';
	int ultimo = 0, ent = 0;
	for(int i = 0; i < n; i++){
		cin >> ent;
		if((ent-ultimo)<=num){
			ultimo = ent;
		}else{
			res = 'N';
		}
	}
	//são quarenta e dois mil, cento e noventa e cinco metros de percurso
	if(42195-ultimo>num){
		res = 'N';
	}
	cout << res << endl;
	
	
	
	
	
	return 0;
}