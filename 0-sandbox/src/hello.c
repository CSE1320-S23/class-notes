#include <stdio.h>



// SIZEOF SKETCH
int main(void)
{
    printf("PTR SKETCH\n");
    int i = 0;
    int* i_addr = &i;
    printf("Memory Address: %p\n", i_addr);
    printf("Value referenced by Memory Address%d\n", *i_addr); // *i_addr = int
    
}
