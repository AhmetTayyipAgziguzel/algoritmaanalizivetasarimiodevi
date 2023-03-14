#include <stdio.h>
#include <stdlib.h>

// Ahmet Tayyip Aðzýgüzel
// 1210505008

void yazdirArray(int array[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",array[i]);
	}
	printf("\n");
}
void takas(int array[],int index1,int index2){
	int s = array[index1];
	array[index1] = array[index2];
	array[index2] = s;
}
int bolum(int array[],int p,int r){
	int x = p;
	int i;
	for(i= p;i < r;i++){
		if(array[i] < array[r]){
			takas(array, i, x);
			x++;
		}
	}
	takas(array, x, r);
	return x;
}
void quickSort(int array[], int p, int r){
	if(p >= r)
		return;
	int q = bolum(array, p, r);
	quickSort(array,p,q - 1);
	quickSort(array, q + 1, r);
}

int main(int argc, char *argv[]) {
	
	
	int array[10000];
  	int i;
  for (i = 0; i < 10000; i++) {
    array[i] = rand();
  }
	int n = 10000;
	quickSort(array, 0, n -1);
	yazdirArray(array,n);
	return 0;
}
