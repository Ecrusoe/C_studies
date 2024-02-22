#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int sayi,birler,i=0;
printf("parcalamak istediginiz sayiyi gir");
scanf("%d",&sayi);
for(i=0;i<3;i++){
	 birler=sayi%10;
	 sayi=sayi-birler;
	 	 sayi=sayi/10;
	 printf("%d\n",birler);

	 
	 
}
	
	return 0;
}
