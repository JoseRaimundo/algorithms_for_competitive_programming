#include <iostream>

using namespace std;



float colisao (float X,float Y,float S1,float S2){
  float tempo=0;
 
  tempo= ((S2-S1)/(X+Y));

return (tempo);	
}


int main()
{
	float X,Y,S1,S2,encontro;
   	int N;
    cin>>N;
    for (int i=0;i<N;i++){
		cin>>X>>Y>>S1>>S2;
	X=X/3.6;
    Y=Y/3.6;
		if (S1>S2){
			cout<<"sixtaxe incorreta da linha "<< i + 1;
			
		}
		cout << X <<" " << Y <<" " << S1 <<" " << S2 << endl;
	encontro=colisao( X, Y, S1, S2);
	cout<<encontro;
	}
    
	
	return 0;       
}