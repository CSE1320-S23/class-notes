#include <stdio.h>



// INTEGER REPRESENTATION SKETCH
int main(void)
{
   int a, b, c, d;
    // Decimal (Base 10)
    a = 10;
    printf("I am a decimal integer: %d\n", a);

    // Octal (Base 8)
    b = 012;
    printf("I am a octal integer: %o\n", b);

    // Hexadecimal (Base 16)
    c = 0xA;
    printf("I am a hex integer: %x or %X\n", c, c);

    // Binary
    d = 0b00001010;
    printf("I am binary, but there is no native printf format flag :(\n");
    
}
