#include <stdio.h>

// PTR PRINT
int main(void)
{
    int i = 20;
    int* i_addr = &i;
    printf("%p\n", i_addr);
    printf("%d\n", *i_addr);
}
