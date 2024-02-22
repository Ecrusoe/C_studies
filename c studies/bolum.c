#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int islem;
	float ilk,ikinci,toplam,cikar,carp,bol;
	printf("ilk sayiyi giriniz");
	scanf("%f",&ilk);
	printf("ikinci sayiyi giriniz");
	scanf("%f",&ikinci);
	printf("aritmetik islemi seciniz:");
	printf("(1)Topla  (2)Cikar  (3)Carp  (4)Bol\n");
	scanf("%d",&islem);
	printf("seciminiz: %d\n",islem);
	switch(islem){
		case 1: toplam=ilk+ikinci;
		printf("%f+%f=%f",ilk,ikinci,toplam);
		break;
		case 2: cikar=ilk-ikinci;
		printf("%f-%f=%f",ilk,ikinci,cikar);
		break;
		case 3: carp=ilk*ikinci;
		printf("%f*%f=%f",ilk,ikinci,carp);
		break;
		case 4:
			if(ikinci==0)
		{
			printf("Bolen sifir olamaz");
		}
		else {
			bol=ilk/ikinci;
			printf("%f/%f=%F",ilk,ikinci,bol);
		}
		break;
		default: printf("gecerli islemi yazin");
			
	}
	getchar();
	return 0;
}
