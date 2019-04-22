#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello\n");
    printf("CSCI3250 team-h\n");
    int i;
    for(i=0;i<3250;i++)
    printf("I hate CSCI%d\n",i );
    printf("I love CSCI3250\n");
    int j;
    for(j=0;j<10;j++){
        if (j%2 == 0)
            printf("I love CSCI 3250\n");
        else
            printf("I love CSCI 3251\n");
    }
    return 0;
}
