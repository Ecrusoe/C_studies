#include <stdio.h>
#include <ctype.h>

int main() {
    char dizi[100];
    char *p=dizi;

    printf("girmek istediginiz cumleyi giriniz (buyuk ve kucuk harfler kaisik):");
    fgets(dizi,100,stdin);
    while (*p!='\0'){
        if (islower(*p)) {
            *p = toupper(*p);
        } else if (isupper(*p)) {
            *p = tolower(*p);
        }
        p++;
    }

    printf("duzenlenmis hali: %s",dizi);

    return 0;
}
