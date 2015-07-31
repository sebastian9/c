#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < 128; i++) {
		printf("%d == %c\n", i, i);
	}

	return 0;
}