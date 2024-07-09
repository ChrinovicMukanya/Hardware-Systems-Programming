#include <stdio.h>

typedef struct Node1{
	unsigned int a: 6;
	unsigned int b: 9;
}	Node1; 

//Forced alignment 
typedef struct Node2{
	unsigned int a: 6;
	unsigned int: 0;
	unsigned int b: 9;
}	Node2;
int main(int argc, char * argv[])
{
	Node1 node1 = {5,5};
	Node2 node2 = {2,3};

	int n1_size = sizeof(node1);
	int n2_size = sizeof(node2);

	printf("Node 1 size %d\n", n1_size);
	printf("Node 2 size %d\n", n2_size);

}
