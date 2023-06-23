#include <stdio.h>
#include <iodstream>
#include <cstdlib>


int margesort (int p, int r, int v[]){
	if(p < r-1){
    	int q = (p + r)/2;
    	margesort(p, q, v);
    	margesort(p, r, v);
    	inter1(p, q, r, v);
	}
	//debug (p, r, v);
}
