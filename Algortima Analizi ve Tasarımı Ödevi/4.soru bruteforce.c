#include <stdio.h>
#include <stdlib.h>

// Ahmet Tayyip Ağzıgüzel
// 1210505008

void bubble_sort(int array[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j+1]) {
                int gecici = array[j];
                array[j] = array[j+1];
                array[j+1] = gecici;
            }
        }
    }
}

int main() {
    int array[10000];
  	int i;
  	int n = 10000;
  for (i = 0; i < 10000; i++) {
    array[i] = rand();
  }
    
    bubble_sort(array, n);

    
    for (i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }
    printf("\n");

    return 0;
}
