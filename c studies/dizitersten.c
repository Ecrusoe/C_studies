#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {	
int elemansayisi;
int i;
int dizi[100];
printf("dizinin eleman sayisini griniz");
scanf("%d",&elemansayisi);

for(i=0;i<elemansayisi;i++){
	printf("%d");
	scanf("%d",&dizi[i]);
}
printf("\n\n");
for(i=elemansayisi-1;0<=i;i--){
	printf("%d\n",dizi[i]);
}
	return 0;
}
