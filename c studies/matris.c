#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int satir,sutun,i,j;
    printf("Matrisin satir sayisini giriniz:");
    scanf("%d",&satir);
    printf("Matrisin sutun sayisini giriniz:");
    scanf("%d",&sutun);
    int matrix[satir][sutun];
    for (i=0;i<satir;i++) {
        for (j=0;j<sutun;j++){
            matrix[i][j]=i*sutun+j+1;
        }
    }
    for (i=0;i<satir;i++){
        for (j=0;j<sutun;j++){
            matrix[i][j]=(int)pow(matrix[0][j],i+1);// us almak için pow fonksiyonunu kullandik.
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
