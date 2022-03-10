#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int broj;
    int jedinice;
    int stotice;
    int desetice;
     printf("Unesi broj   ");
     scanf("%d",&broj);
stotice=broj/100;
desetice=broj/10-10*stotice;
jedinice=broj%10;
if(broj==pow(stotice, 3)+ pow(desetice, 3)+ pow(jedinice, 3))
printf("Broj je Armstrongow broj");

else
    printf("Broj je Armstrongow broj");

return 0;

}
