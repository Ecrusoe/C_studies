#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int s1,s2,ort;
printf("1.sinav  yaz");
scanf("%d",&s1);
printf("ikinci ssinav yaziniz");
scanf("%d",&s2);
ort=(s1+s2)/2;
if(ort>=50){
	printf("gecti %d  ",ort);
	 
}
else {
	printf("50 den kucuk");
}
	
	return 0;
}
