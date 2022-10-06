#include <stdio.h>
#include "som.h"
#include "prod.h"

int convert()
{
    int f;
    int f1;
    int f2;
    f1 = somme(1, 2);
    f2 = produit(3, 4);
    scanf("%d", &f);
}

int main()
{
    int f1;
    int f2;
    f1 = somme(1, 2);
    f2 = produit(3, 4);
    convert();
    return 0;
}
