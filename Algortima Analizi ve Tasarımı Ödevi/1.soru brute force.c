#include <stdio.h>
#include <stdlib.h>

// Ahmet Tayyip Aðzýgüzel
// 1210505008

int main(int argc, char *argv[]) {
	
	int array[10000];
  	int i;
  for (i = 0; i < 10000; i++) {
    array[i] = rand();
  }
    int n = sizeof(array) / sizeof(array[0]); 
    int max = array[0]; 
	int a;
    for (a = 1; a < n; a++) { 
        if (array[a] > max) {
            max = array[a];
        }
    }

    printf("Dizideki en buyuk deger: %d", max); 
	
	
	
	
	return 0;
}
