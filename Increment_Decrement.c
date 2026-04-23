#include<stdio.h>

int main()
{
    int x=10;
    int y=x++;
    int z=y++;

    printf("  %d\n", z++);
    printf("  %d\n", z);
    return 0;
}