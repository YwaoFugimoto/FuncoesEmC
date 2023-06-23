#include <iostream>
#include <cstdlib>
#include <stdlib.h>


void quicksort (int v[], int p, int r){
    if(p < r){
        int j = separa(v, p, r);
        quicksort (v, p, j-1);
        quicksort(v, j+1, r);
    }
}
