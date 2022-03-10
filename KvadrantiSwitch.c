#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj;
    printf("unesi broj 1 - 4  \n");
    scanf("%d",&broj);
    switch(broj){
case 1:
    printf(" + + ");
    break;
case 2:
    printf(" - + ");
    break;
case 3:
    printf(" - - ");
    break;
case 4:
    printf(" - + ");
    break;
default:
    printf("Taj kvadrante ne postoji");





    }

    return 0;



}
