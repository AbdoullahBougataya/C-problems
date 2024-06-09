#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char playerInput;
    char computerInput;
    int zot;
    printf("player ( r: rock / p: paper / s: scissors ): ");
    scanf("%[^\n]c", playerInput);
    srand(time(0));
    zot = rand() % 3;
    computerInput = (zot == 0)? 'r':computerInput;
    computerInput = (zot == 1)? 'p':computerInput;
    computerInput = (zot == 2)? 's':computerInput;
    printf("computer ( r: rock / p: paper / s: scissors ): %c\n", computerInput);
    if((playerInput == 'r' && computerInput == 's') || (playerInput == 'p' && computerInput == '') || (playerInput == 115 && computerInput == 112))
    {
        printf("draw\n");
    }
    else if((computerInput == 114 && playerInput == 115) || (computerInput == 112 && playerInput == 114) || (computerInput == 115 && playerInput == 112)) // r=114 p=112 s=115
    {
        printf("computer won\n");
    }
    else
    {
        printf("draw\n");
    }
}
