#include <stdio.h>
#include <math.h>


int bis(int x , int m){
	int z = x | m;
	return z;
}
int bic(int x , int m){
	x = ~x;
	int z = x | m;
	z = ~z;
	return z;
}
int bool_or(int x, int m){
	
}
int bool_xor(int x,int m){
	
}
int main(int argc, char * argv[])
{
	unsigned int x = 0x87654321;
	unsigned int m = 0x000000FF;

	printf("Ox%x\n", bis(x,m));
	printf("0x%x\n", bic(x,m));

}
