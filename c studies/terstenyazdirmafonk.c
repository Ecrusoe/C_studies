#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
 void terssirala(int dizi[],int boyut){
		int i;
		int gecici;
		for(i=0;i<(boyut/2);i++){
			gecici=dizi[i];
			dizi[i]=dizi[boyut-1-i];
			dizi[boyut-1-i]=gecici;
		}
		printf("\n\n");
		for(i=0;i<boyut;i++){
			printf("%d  ",dizi[i]);
		}
	}
int main(int argc, char *argv[]) {
int elemansayisi;
int i;

printf("Kac tamsayi girilecek?");
scanf("%d",&elemansayisi);
int dizi[elemansayisi];
for(i=0;i<elemansayisi;i++){
	printf("bir sayi giriniz: ");
	scanf("%d",&dizi[i]);
}
terssirala(dizi,elemansayisi);
	return 0;
}
