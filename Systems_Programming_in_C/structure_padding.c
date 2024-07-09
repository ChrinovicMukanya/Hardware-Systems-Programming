#include <stdio.h>

typedef struct X_Block{
	char a; // 1 byte 
	char b; // 1 byte
	int c; // 4 byes
}	X_Block;

typedef struct Y_Block{
	char a; //1 byte
	int b; //4 bytes
	char c; // 1 byte

}	Y_Block;
int main(int argc, char * argv[])
{
	X_Block x_block = {'a', 'b', 21};
	Y_Block y_block = {'a', 21, 'b'};

	int x_size = sizeof(x_block);
	int y_size = sizeof(y_block);

	printf("x block : %d\n", x_size);
	printf("y bloxk : %d\n", y_size);


}
