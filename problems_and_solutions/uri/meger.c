#include <stdio.h>
int cont =0;
void merge(int vec[], int vecSize) {
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
    }
    else {
      tmp[k] = vec[j++];
    }
    ++k;
  }
 
  if (i == mid) {
  	  
    while (j < vecSize) {
      tmp[k++] = vec[j++];
    }
  }
  else {
  
    while (i < mid) {
      tmp[k++] = vec[i++];
 
    }
  }
 
  for (i = 0; i < vecSize; ++i) {
    vec[i] = tmp[i];
  }
 cont++	;
  free(tmp);
}
 
void mergeSort(int vec[], int vecSize) {
  int mid;
 
  if (vecSize > 1) {
    mid = vecSize / 2;
    mergeSort(vec, mid);
    mergeSort(vec + mid, vecSize - mid);
    merge(vec, vecSize);
  }
}


int main(){

	int n, i;
	while(1){
	   scanf("%d",&n);
	   if(n==0)break;
	   int vet[n];
	   
	   
	   for(i = 0; i < n; i++){
		   scanf("%d", &vet[i]);
	   }	
	
	 mergeSort(vet, n);
	    printf("%d \n", cont);	
		cont = 0;
		
		}

	
	return 0;
}