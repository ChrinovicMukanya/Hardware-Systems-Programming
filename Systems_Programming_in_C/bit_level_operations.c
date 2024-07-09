#include <stdio.h>

void inplace_swap(int * x, int * y){
	*y = *x ^ *y;
	*x= *x ^ *y;
	*y = *x ^ *y;
}
void reverse_array(int a[], int cnt){
	int first, last;

	for (first = 0,last = cnt-1; first <= last; first++, last--){
		inplace_swap(&a[first], &a[last]);
	}
}
int main(int argc, char * argv[]){

	int x = 6;// 00000110
	int y = 12;//00001100

	int and = x & y;
	printf("%d\n", and);//00000100

	int or = x | y;
	printf("%d\n", or);// 00001110

	int xor1 = x ^ y;
	printf("%d\n", xor1); //00001010


	int val1 = 5;// 00000101
	int val2 = 10;//00001010

	int xor2 = val1 ^ val2;//00001111 
	printf("val %d\n\n\n\nArrays\n", xor2);

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int cnt = sizeof(arr) / sizeof(arr);
	int n;

	for (n = 0; n < 9; n++){
		printf("%d\n", arr[n]);
	}
	reverse_array(arr, 9);

	for (n = 0; n < 9; n++){
		printf("%d\n", arr[n]);
	}		
}

