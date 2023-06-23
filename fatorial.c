
#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;
   
int inst = 0;

int fatorial(int n){
	cout << endl << "Instância " << ++inst << " quando n = " << n;
	if (n < 2){
    	return 1;
	}else{
    	return n * fatorial (n-1);
	}
}
