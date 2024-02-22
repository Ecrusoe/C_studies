#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int Sum(int n){
	int partialsum=0;
	if(n==1)
	return 1;
	partialsum=Sum(n-1);
	return partialsum+n;
}
int main(int argc, char *argv[]) {
	
int x=0;
x=Sum(5);
printf("x:%d\n",x);


	
	
	
	return 0;
}
