#include <iostream>

//union find
using namespace std;
int p[100001], rank[100001];
void set(int x){
	p[x] = x;
	rank[x] = 0;
}

void link(int x, int y){
	if(rank[x]>rank[y]){
		p[y] = x;
	}else{
		p[x] = y;
	}	
	if(rank[x]==rank[y]){
		rank[y] = rank[x]+1;
	}	
}

int findset(int x){
	if(x != p[x]){
//	cout << p[x] << " ";
		p[x] = findset(p[x]);
	}
	
	return p[x];
}


int main(){
	int x, y, n, m;
	char temp;
	cin >> n >> m;
	for(int i = 1; i < n+1; i++){
		set(i);
	}
	
	
	for(int i = 0; i < m; i++){
		cin >> temp;cin >> x >> y;
		if(temp=='F'){		
			link(findset(x), findset(y)); 
		}else{
			if(findset(x) == findset(y))
			{
			cout << "S" <<endl;	
			}else{
			cout << "N" << endl; 
			}
		}
		
	}
	return 0;
}