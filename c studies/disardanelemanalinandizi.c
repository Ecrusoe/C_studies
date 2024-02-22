#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
  int elemansayisi;
  int i;   
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&elemansayisi);
     
    int dizi[elemansayisi];
     
    for(i=0;i<elemansayisi;i++)
    {
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    prntf("\n\n");
     
    for(i=elemansayisi-1;0<=i;i--)
    {
        printf("%d\n",dizi[i]);
        
    }
	
	
	
	
	
	
	return 0;
}
