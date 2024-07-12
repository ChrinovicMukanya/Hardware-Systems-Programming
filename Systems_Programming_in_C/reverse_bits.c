#include <stdio.h>

int main(int argc, char argv[])
{
    unsigned char byte = 0b10110010;
    unsigned char rev = 0b10000000;
    
    rev = (byte * 0x0202020202ULL & 0x010884422010ULL) % 1023;
    printf("Original : %d (binary : %08b)\n", byte, byte);
    printf("Reversed : %d (binary : %08b)\n", rev, rev); 

}
