#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 30

void deallocate(char** isimler,int n){	
int i;
    for (i= 0; i < n; i++) {
        free(isimler[i]);
    }
    free(isimler);
}

int main() {
    int n;
    int i;
    printf("Kac tane isim gireceksiniz?");
    scanf("%d",&n);

    char** isimler=(char**)malloc(n* sizeof(char*));
    if (isimler==NULL){
        printf("yer ayirtma basarisiz");
        return 1;
    }

    for (i =0;i<n;i++){
        char input[MAX_NAME_LENGTH];
        printf("isim #%d: ", i + 1);
        scanf("%s",input);

        isimler[i] = (char*)malloc((strlen(input) + 1) * sizeof(char));
        if (isimler[i]==NULL){
            printf("yer ayirtma basarisiz");
            deallocate(isimler,i);
            return 1;
        }

        strcpy(isimler[i],input);
    }
    printf("\nGirilen isimler:\n");

    for (i=0;i<n;i++){
        printf("%s\n",isimler[i]);
    }
    deallocate(isimler,n);
    return 0;
}
