#include <iostream>

using namespace std;

void funcao(){
   long PA, PB;
   double GA, GB;
   cin >> PA >> PB >> GA >> GB;
   int anos=0;
   if(anos==101)  {
	    cout << "Mais de 1 seculo." << endl;
   }else{
   while (PA <= PB)   {
      if (anos > 100)      {
         cout << "Mais de 1 seculo." << endl;
         return;
      }
      PA *= GA/100 + 1;
      PB *= GB/100 + 1;
      anos++;
   }
   cout << anos << " anos." << endl;
   }
   }

int main (){      
   int T;
   cin >> T;
   for (int i=0; i<T; i++)
      funcao();
   return 0;
}