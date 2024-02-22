#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=0,no,a=1,b=1,c;
	printf("serinin hangi numarasini istersiniz");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		c=a+b;
		a=b;
		b=c;
		
	}
	no=c;
	
	printf("no %d",no);
	
	
	return 0;
}
