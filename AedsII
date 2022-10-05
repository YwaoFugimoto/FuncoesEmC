####FATORIAL####

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
///////////////////////////////////////////////////////////////////////////////////
int fatorial12(int n){

	int fat = 1;
	if(n < 0)
    	return -1; // -1 = Significa erro.
	while(n > 1){
    	fat = fat * n;
    	n--;
	}
	return fat;
}
///////////////////////////////////////////////////////////////////////////////////

<---
int main(int argc, char** argv) {
    
	int n, ft;
    
	cout << "Calculo fatorial: " << endl;
	cout << "Digite o valor de n -> ";
	cin >> n;
	ft = fatorial12(n);
	cout << "O fatorial de " << n << " é -> " << ft << endl;
    
	return 0;
}
--->




///////////////////////////////////////////////////////////////////////////////////
####FIBONACCI####

int inst = 0;

void fib(int n, int ult, int penult){
	//cout << endl << " Instância " << ++inst << " " ;
	cout << ult << " " ;
	if(ult + penult < n){
    	fib(n, ult + penult, ult);
	}
}

<---
int main(int argc, char **argv){
    
	int n, ft;
    
	cout << "Cálculo da sequencia de fibonacci = " << endl ;
	cout << "Digite o valor de n -> ";
	cin >> n ;
	cout << "Sequência -> ";
	fib(n, 1, 0);
	cout << endl;
    
	return 0;
    
}
--->

///////////////////////////////////////////////////////////////////////////////////

<---
int main(int argc, char** argv) {
	int *p;
	int v = 10, y;
	p = &v; // O ponteiro p vai apontar para o local de v
	y = *p; // Y ira receber o valor alocado onde p esta apontando.
	cout << p << endl;
	cout << v;
	cout << y;
    	return 0;
}
--->

////////////////////////////////////////////////////////////////////////

int inst = 0, tam = 10;
int *z;

int* inc (int tam){
	int *v = (int *)malloc(tam * sizeof(int));
	int *p;
	srand(NULL);
	for(p = v; p < v + tam; p++){
    	*p = rand() % 100;
	}
	return v;
}
//////////////////////////////////////////////////////////////////////////////////////////
int separa (int v[], int p, int r){
	int c = v[r]; // Pivô
	int temp, j = p;
	for (int k = p; k < r; k++){
    	if(v[k] <= c){
        	temp = v[j];
        	v[j] = v[k];
        	v[k] = temp;
        	++j;
    	}
	}
	v[r] = v[j];
	v[j] = c;
    
	return j;
}
//////////////////////////////////////////////////////////////////////////////////////////
int inter1(int p, int q, int r, int v[]){
	int *w;
	w = (int *)malloc((r - p) * sizeof(int));
	int i = p, j = q;
	int k = 0;
	while(i < q && j < r){
    	if (v[i] <= v[j]){
        	w[k++] = v[i++];
    	}else{
        	w[k++] = v[j++];
    	}
	}    
	while(i < q){
    	w[k++] = v[i++];
	}
   	 
	while(j < r){
    	w[k++] = v[j++];
	}
   	 
	for(i = p; i < r; i++){
    	v[i] = w[i - p];
	}
   
	free (w);
}
//////////////////////////////////////////////////////////////////////////////////////////
int margesort (int p, int r, int v[]){
	if(p < r-1){
    	int q = (p + r)/2;
    	margesort(p, q, v);
    	margesort(p, r, v);
    	inter1(p, q, r, v);
	}
	//debug (p, r, v);
}
//////////////////////////////////////////////////////////////////////////////////////////
int main(int agrc, char** agrv) {
    
	int *v;
	v = inc(10);
	/*
	int a[4] = {0, 3, 4, 7};
	int b[6] = {1, 2, 5, 6, 8, 9};
	int c[10];
	int i = 0, j = 0, n = 0;

	while(i < 4 && j < 6){      	 
    	if(a[i] < b[j]){
        	c[n] = a[i];
        	i++;
    	}else{
        	c[n] = b[j];
        	j++;
    	}
    	n++;
	}

	if(i < 4){
    	for(i; i < 4; i++){
        	c[n++] = a[i];  	 
    	}
	}
    
	if(j < 6){
    	for(j; j < 6; j++){
        	c[n++] = b[j];
    	}
	}
   	 
	for(n = 0; n < 10; n++){
    	cout << c[n];
	}
	*/
	//margesort(0, 10, v);
	separa(v, 0, 9);
	cout << endl;
	for(int k = 0; k < 10; k++){
    	cout << " " << v[k];
	}
    
	return 0;       	 
}

