#include <stdio.h>
#include <stdlib.h>
 float trosak(int n,float x){
 return n*x;
  }

int main()
{
 int a;
    printf("Unesi broj prijatelja \n");
	scanf("%d",&a);
 int b;
	printf("Unesi cijenu pretplate\n");
	scanf("%d",&b);
 int c;
 c=trosak(a,b);
 printf("C je: %d ",c);




}
