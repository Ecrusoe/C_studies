#include <stdio.h>

struct Student
{
    int id;
    char name[16];
    char surname[16];
    int average;
};

int main()
{
    FILE *file;
    struct Student student;
    
    
    file = fopen("ogrenciler.dat", "rb");
    
    if (file == NULL)
    {
        printf("Dosya acilamadi.\n");
        return 1;
    }
    
   
    while (fread(&student, sizeof(struct Student), 1, file))
    {
        printf("ID: %d\n", student.id);
        printf("Ad: %s\n", student.name);
        printf("Soyad: %s\n", student.surname);
        printf("Ortalama: %d\n", student.average);
        printf("------------------------\n");
    }
    
    
    fclose(file);
    
    return 0;
}
