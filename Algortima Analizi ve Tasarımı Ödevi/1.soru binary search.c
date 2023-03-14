#include <stdio.h>
#include <stdlib.h>

// Ahmet Tayyip Aðzýgüzel
// 1210505008

int bul(int array[], int sol, int sag) {
    if (sol == sag) {
        return array[sol];
    }
    int ort = sol + (sag - sol) / 2;
    int solmax = bul(array, sol, ort);
    int sagmax = bul(array, ort + 1, sag);
    return (solmax > sagmax) ? solmax : sagmax;
}

int main(int argc, char *argv[]) {
	
	int array[10000];
  	int i;
  for (i = 0; i < 10000; i++) {
    array[i] = rand();
  }
    int n = sizeof(array) / sizeof(array[0]);
    int max = bul(array, 0, n - 1);
    printf("En buyuk deger: %d\n", max);
	
	
	
	return 0;
}
