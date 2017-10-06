/* Guilherme A. Pinto - OBI 2014 - Semente */
#include <iostream>

using namespace std;

#define MAXR 1000

int d[MAXR],F,R;

int main() {
  int i,ans;
  float f;
  cin >> F >> R;
  for ( i = 0; i < R; i++ ){
    cin >> d[i];
  }
  if (d[0]-1>F-d[R-1]){
  ans = d[0]-1;
  }else{
  ans = F-d[R-1];
  }
  
  for ( i = 1; i < R; i++ ){
    f = (float)(d[i]-d[i-1])/(float)2;
    if ( f > ans ) ans = f;
  }
  cout << ans << endl;
  return 0;
}