#include <stdio.h>

#include "main.h"



int main(void)
{

    intMaxMin();
    printf("Hello\n");
    return 0;
}

void intMaxMin(void)
{
    int max = (1 << 30) + ((1 << 30)-1);
    int min = (1 << 31);

    printf("max = %d, %x\n", max, max);
    printf("min = %d, %x\n", min, min);
    printf("edit by vin in local ubuntu\n");

    printf("edit on github for test\n");

}

