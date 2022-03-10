#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int prvi_broj;
  int drugi_broj;

  printf("Uneso prvi broj:\n");
  scanf("%d",&prvi_broj);
printf("Unesi drugi broj:\n");
  scanf("%d",&drugi_broj);
  if(prvi_broj>drugi_broj)
    printf("%d je veci od %d",prvi_broj ,drugi_broj);
  else
    printf("%d je manji od %d",drugi_broj ,prvi_broj);







}
