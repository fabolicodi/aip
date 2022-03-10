#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int unesi_broj;
    printf("Unesi broj koji zelis\n");
    scanf("%d",&unesi_broj);

    if(unesi_broj%2==0)
    printf("Broj je paran\n");
    if(unesi_broj%2>0)
    printf("Broj je neparan\n");
    return 0;



}
