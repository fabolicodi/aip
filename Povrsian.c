#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float S;
   int ax;
   int ay;
   int bx;
   int by;
   int cx;
   int cy;
   float a;
   float b;
   float c;
   printf("Unesi ax u cm:");
   scanf("%d",&ax);
    printf("Unesi ay u cm:");
   scanf("%d",&ay);
    printf("Unesi bx u cm:");
   scanf("%d",&bx);
    printf("Unesi by u cm:");
   scanf("%d",&by);
    printf("Unesi cx u cm:");
   scanf("%d",&cx);
    printf("Unesi cx u cm:");
   scanf("%d",&cy);
   a=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
   printf("A je ");
   printf("%.2f\n",a);
b=sqrt((ax-cx)*(ax-cx)+(ay-cy)*(ay-cy));
    printf("B je ");
    printf("%.2f\n",b);
    c=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
 printf("C je ");
 printf("%.2f\n",c);

S=(a+b+c)/2;
 printf("S je ");
printf("%.2f\n",S);
}

