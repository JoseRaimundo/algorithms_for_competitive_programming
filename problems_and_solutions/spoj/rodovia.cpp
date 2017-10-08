#include <iostream>
#include <cstring>
using namespace std;


int main() {
  int n, v, w, visn;
  char res = 'S';
  cin >> n;

	
	int vet[n+1];
	int vis[n+1];
	int ant[n+1];
	int pos[n+1];
	std::memset(vis, 0, sizeof(vis));
	std::memset(vet, 0, sizeof(vet));	
	std::memset(ant, 0, sizeof(ant));	
	std::memset(pos, 0, sizeof(pos));
	
  for (int i = 1; i <= n; ++i) {
  	cin >> v >> w;
    vet[v] = w;
    ++pos[v];
    ++ant[w];
  }
  bool temp = true;
  for (int i = 1; i <= n; ++i) {
    if ((ant[i] != 1) || (pos[i] != 1)) {
      res = 'N';
      temp = false;
      break;
    }
  }

  v = 1;
  visn = 0;
  while (vis[v] == 0 && temp) {
    vis[v] = 1;
    ++visn;
    v = vet[v];
  } 
  if (visn != n) res = 'N';
  cout << res << endl;
   return 0;
}
  
