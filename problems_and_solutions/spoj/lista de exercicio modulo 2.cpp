#include <iostream>

using namespace std;

float colisao (float X,float Y,float S1,float S2,float A,float B){
  float tempo;
 tempo= (((S2-S1)/(X+Y))+(((A*A)+(B*B))/2));
if	(tempo >= 1){
	return (tempo);
}else{
return (-1);	
}}

int main()
{
	float X,Y,S1,S2,A,B;
    int vetor [50];
   	int N;
    cin>>N;
    for (int i=0;i<N;i++){
		cin>>X>>Y>>S1>>S2>>A>>B;
	X=X/3.6;
    Y=Y/3.6;
		if (S1>S2){
			cout<<"sixtaxe incorreta da linha "<< i + 1;
		}

	}
           for (int i=0;i<N;i++){
			if (colisao( X, Y, S1, S2,A,B) >1){
				vetor[i]=colisao( X, Y, S1, S2,A,B);		
           	}else{
            vetor[i]=-1;
			   }
		   }
		   cout<<"\n";
	for (int i =0;i<N;i++){
        cout<<vetor[i]<<"\n";
	}
		   	   
	return 0;       
}