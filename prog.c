#include <stdio.h>
#include "fahr.h"
main()
{
    int f;
    float c;
    scanf("%d", &f);
    c = fahr(f);
    printf("En Celcius = %f\n", c);
}