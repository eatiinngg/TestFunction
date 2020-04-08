#include <stdio.h>


void intMaxMin(void);

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

}
