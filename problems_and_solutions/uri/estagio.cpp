#include <iostream>
const int MAX_ALUNOS = 1000;
using namespace std;
int main(){
  int i, indice_melhor, n;
  int turma=1;
  struct {
    int codigo, media;
  } alunos[MAX_ALUNOS];

  while (cin >> n, n){
  	int cont = 0, temp = 0, maior = 0;
		for (i = 0; i < n; i++){
        	cin >> alunos[i].codigo;
			cin >> temp;		
			alunos[i].media = temp;
			if(temp>maior){
				maior = temp;
			}
		}
		indice_melhor = 0;
		cout << "Turma " << turma++ << "\n";
		for (i = 0; i < n; i++){
        	 if (alunos[i].media >= maior){
            	 cout << alunos[i].codigo << " ";
		 	 }
		}
		cout << endl << endl;
   }
  return 0;
}
