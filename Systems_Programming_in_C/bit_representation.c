#include <stdio.h>
#include <string.h>

typedef unsigned char * byte_pointer;
void show_bytes(byte_pointer start ,int len){
	int x;
	for (x = 0; x < len; ++x){
		printf("%.2x", start[x]);
	}printf("\n");
}
void show_int(int x){
	show_bytes((byte_pointer) &x, sizeof(int));
}
void show_float(float x){
	show_bytes((byte_pointer) &x, sizeof(int));
}
//void show_pointer(void x*){
//	show_bytes((byte_pointer) &x, sizeof(void *));
//}
void test_show_bytes(int val){
	int ival = val;
	float fval = (float)ival;
	int *pval = &ival;

	show_int(ival);
	show_float(fval);
}
int main(int argc, char * argv[]){	
	int val = 0x87654321;
	printf("%p\n%u\n", &val);

	byte_pointer valp = (byte_pointer) &val;
	printf("Byte Address : %c\n", valp); 
	show_bytes(valp, 1);
	show_bytes(valp, 2);
	show_bytes(valp, 3);

	printf("\n\nSTRINGS\n");

	const char * str = "abcdef";
	show_bytes((byte_pointer) str, strlen(str));		


}
