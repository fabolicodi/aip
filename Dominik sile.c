#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int F1;
    int F2;

    printf("unesi F1 i F2\n");
    scanf("%d %d",&F1, &F2);

    printf("Isti smjer:%d N\n", F1+F2);
    printf("Suprotni smijer:%d N\n", F1-F2);
    printf("Okomite su:%.2f N\n", sqrt (F2*F2 + F1*F1) );


     return 0;
}

