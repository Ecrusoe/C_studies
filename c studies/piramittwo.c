#include <stdio.h>
 
void main() 
  {
   int i,j;
   char karakter= 'A';
   int uzunluk,b;
   int c=1;
 
   printf("piramit uzunlugunu giriniz : ");
   scanf("%d",&uzunluk);
 
   for (i=1;i<=uzunluk; i++) 
	{
	for(b=1;b<=uzunluk-i;b++)  
        
	printf("  ");
      for (j = 0; j <= (c/2);j++) {
         printf("%c ",karakter++);
      }
 
      karakter=karakter-2; 
 
      for (j=0;j<(c/2);j++){
         printf("%c ",karakter--);
      }
      c=c+2;
      karakter='A';
      printf("\n");
   }
}
