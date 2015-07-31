#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	char cipher[7] = {'c','i','p','h','e','r','\0'};
	char operation[7] = {0};
	for (i = 0; i < 8; i++) {
		operation[i] = argv[1][i];
	}

	if(operation == cipher) {
		printf("I am really getting this\n");
	} else {
		printf("Come on, you're almost in it\n");
	}

	printf("%s\n", operation);
	for (i = 0; i < 10; i++) {
		printf("%d\t", operation[i]);
	}
	printf("\n");
	printf("%s\n", cipher);
	for (i = 0; i < 10; i++) {
		printf("%d\t", cipher[i]);
	}
	printf("\n");

	return 0;
}