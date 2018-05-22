#include <stdio.h>
#include "head.h"

char a[8][8]; 
int main() { 
int x1,y1,x2,y2,trigger=0;

init();
visual();

printf("\nenter x1 y1:\n");
scanf("%d %d",&x1,&y1);
printf("\nenter x2 y2:\n");
scanf("%d %d",&x2,&y2);


do
{
  if ((a[8-y2][x2-1]=='k') ||( a[8-y2][x2-1]=='K')) trigger=1;  
a[8-y2][x2-1]=a[8-y1][x1-1];
a[8-y1][x1-1]=' ';
visual();
 if (trigger) break;
printf("\nenter x1 y1:\n");
scanf("%d %d",&x1,&y1);
printf("\nenter x2 y2:\n");
scanf("%d %d",&x2,&y2);
 } while(1);
} 
