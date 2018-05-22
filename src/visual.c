#include <stdio.h>
#include "head.h"
char a[8][8];
void visual(){

int i,j;
for (i=0;i<8;i++) 
{	printf("%d ",8-i);
	for (j=0;j<8;j++)
	{
		printf("%c",a[i][j]);
	}
	printf("\n");
}
printf("  ");
for (i=0;i<8;i++)
	printf("%d",1+i);
printf("\n");
}
