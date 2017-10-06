#include <iostream>

using namespace std;

int A[MAXN][MAXN], visitado[MAXN], dis[MAXN];

int n, m;

int dijkstra() {
  int i;

  memset(dis, 10000000, sizeof(dis)); /* distancia inicial infinita */
  memset(visitado, 0, sizeof(visitado));
  dis[0] = 0;

  for (;;) {
    int no = -1;
    for (i = 0; i < n; i++)
      if (!visitado[i] && (no == -1 || dis[i] < dis[no]))
	no = i;

    if (no == -1) break;
    visitado[no] = 1;

    for (i = 0; i < n; i++)
      if (dis[no] + A[no][i] < dis[i])
	dis[i] = dis[no] + A[no][i];
  }    

  return dis[n-1];
}




int main(){
	
	
	
	
	
	
	return 0;
}