//Elizabeth Barco
//CSC-341

#include <stdio.h>
#include <stdlib.h>
//global variables
int x;
int y = 15;
//Main Function
int main(int argc, char *argv[])
{
//local variables which hold values
int i;
int z = 0;

int *values;

values = (int *)malloc(sizeof(int)*5);
printf("Argc address: %p\n", &argc);
printf("Local variable stack address: %p\n", &i);
printf("Heap Malloc address: %p\n", values);
printf("Uninitialized x address: %p\n", &x);
printf("Initialized y adress: %p\n", &y);
return EXIT_SUCCESS;
}


