#include <stdio.h>

int main(int argc, char *argv[])
{
	int *multidimensional[] = {
		int *one = {0,0,0,0,0,0,0,1},
		int *two = {0,0,0,0,0,0,1,0},
		int *three = {0,0,0,0,0,0,1,1},
		int *four = {0,0,0,0,0,1,0,0};
	};
}

printf("The 6th value of the four string in binary is: %d \n", multidimensional[3][5]);