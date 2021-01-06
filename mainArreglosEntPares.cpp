#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,n;
	int ep[100];
	n=2;
	cout <<"El arreglo enteros pares es: \n" ;
	for(i=0;n<=100;i=i+1){
	    ep[i]=n;
	    n=n+2;
		cout <<ep[i] <<"\n";
		}
	return 0;
}
