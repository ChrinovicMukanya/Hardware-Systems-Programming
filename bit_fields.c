#include <stdio.h>

typedef struct Date{
	unsigned int dd : 5; // max_d = 31 = max_bits = 00011111 = 5
	unsigned int mm : 4;// max_m = 12 = max_bits = 000001111 = 4
	unsigned int yy;
}	Date;

int main(int argc, char * argv[])
{
	Date date = {21,7, 2024};
	printf("%d\n", sizeof(date));
}
