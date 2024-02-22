#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 1000

void coz(char* str) {
    int len = strlen(str);
    char* cozuldu= (char*)malloc((len + 1) * sizeof(char));

    int i = 0;
    int j = 0;
    int hesap;
    int k;
    while (i<len){
        char ch=str[i];
        if (ch>='A'&&ch<='Z'){
            int hesap=str[i + 1]-'0';
            for (k=0;k<hesap;k++) {
                cozuldu[j]=ch;
                j++;
            }
            i += 2;
        } else {
            printf("Geçersiz karakter: %c\n", ch);
            free(cozuldu);
            return;
        }
    }
    cozuldu[j] = '\0';
    FILE* file=fopen("Deneme.txt", "a");
    if (file==NULL) {
        printf("Dosya acma hatasi\n");
        free(cozuldu);
        return;
    }
    fprintf(file, " ve %s",cozuldu);
    fclose(file);
    printf("Metin basarýyla çozuldu ve dosyaya yazildi\n");

    free(cozuldu);
}
int main() {
    FILE* file = fopen("Deneme.txt", "r");
    if (file == NULL) {
        printf("Dosya acma hatasi\n");
        return 1;
    }
    char str[MAX_LENGTH];
    if (fgets(str,MAX_LENGTH,file)==NULL){
        printf("Dosya okuma hatasi!\n");
        fclose(file);
        return 1;
    }
    fclose(file);
    coz(str);

    return 0;
}
