#include <algorithm>
#include <iostream>
#include <vector>
int cont = 0; 
void merge(int *vec, int vecSize) {
  int mid;
  int i, j, k;
  int* tmp;

  tmp = (int*) malloc(vecSize * sizeof(int));
  	  if (tmp == NULL) {
  	  exit(1);
  	  }
		mid = vecSize / 2;
		  i = 0;
		  j = mid;
		  k = 0;
  while (i < mid && j < vecSize) {
	    if (vec[i] <= vec[j]) {
	      tmp[k] = vec[i++];
		}else {
	      tmp[k] = vec[j++];
	    }
	    ++k;
	    cont+=(j+i);
  }
 
  if (i == mid) {
	while (j < vecSize) {
	tmp[k++] = vec[j++];
	}
  }else {
	while (i < mid) {
	tmp[k++] = vec[i++];
	}
  }
 
  for (i = 0; i < vecSize; ++i) {
    vec[i] = tmp[i]; 
  }
  free(tmp);
}
 
void mergeSort(int *vec, int vecSize) {
  int mid;
  if (vecSize > 1) {
    mid = vecSize / 2;  
    mergeSort(vec, mid);
    mergeSort(vec + mid, vecSize - mid);
    merge(vec, vecSize);
  }
}
	using namespace std;
	int main(){
		int n;
		while(cin>>n, n){
		
		int vet[n+1];
		for(int i = 0; i < n; i++){
			cin >> vet[i];	
		}
		mergeSort(vet, n);
		cout << cont << endl;
		cont = 0;
		for(int i = 0; i < n; i++){
		//	cout << vet[i] << " ";
		}
		}	
		return 0;
	}