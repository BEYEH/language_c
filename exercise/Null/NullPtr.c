#include <stdio.h>
#include <stddef.h>

int main()
{
    int *ptr = NULL;

    if (ptr == NULL)
    {
        printf("ptr is NULL pointer\n");
    }
    else
    {
        printf("ptr is not NULL pointer\n");
    }

    return 0;
}