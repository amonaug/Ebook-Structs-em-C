#include <stdio.h>
#include "structs.h"

int main()
{
    Data data;
    Data *ptrData = &data;

    ptrData->dia = 12;
    ptrData->mes = 2;
    ptrData->ano = 5;

    printf("Data: %d/%d/%d\n", (*ptrData).dia, (*ptrData).mes,  (*ptrData).ano);

    return 0;
}