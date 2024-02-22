#include <stdio.h>
#include <stdlib.h>

int sirala(int elemansayisi,int dizi[elemansayisi]){
	int i;

		for(i=elemansayisi-1;0<=i;i--){
		printf("%d\n",dizi[i]);
	}
}

int main(int argc, char *argv[]) {
	
	int elemansayisi;
	int i;
    printf("Dizinin eleman sayisini giriniz");
	scanf("%d",&elemansayisi);
	int dizi[elemansayisi];
	for(i=0;i<elemansayisi;i++){
		printf("diziyi giriniz");
		scanf("%d",&dizi[i]);
	}	
	printf("*********dizinin tersi**********\n\n");
sirala(dizi[i]);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
