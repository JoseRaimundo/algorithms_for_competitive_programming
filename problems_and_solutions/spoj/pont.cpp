#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float d,soma=0,media=0,vet [10];
    for (int i=0;i<10;i++){
        cin >> vet [i];
        soma = soma + vet [i];} 
        media = soma/10;
       for (int i=0;i<10;i++){
       if (vet [i]> media ){
                d++;}
}
    cout << d;
    
    
    
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
