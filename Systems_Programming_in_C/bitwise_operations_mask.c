#include <stdio.h>

int main(int argc, char * argv[])
{
	int x = 0x87654321;
	int mask = 0x000FF000;
	int z = x | mask;

	printf("0x%x\n", z);


}
