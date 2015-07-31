// A program inteded to cipher or decipher code dependind on the command given by argv[2]
// The switch is the part giving an error, aparently you can't use strings in switches

#include <stdio.h>

void cipher(char arg[]);
void decipher(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;
	char *operation = argv[1];
	char *cipher_char = "cipher";
	char *decipher_char = "decipher";

	printf("%s\n", operation);

	if(operation == cipher_char) {
		printf("No se que cono pasa\n");
	} else {
		printf("Observa\n");
	}

	if (operation == cipher_char) {
		for (i = 2; i < argc; i++) {
			cipher(argv[i]);
		}
	} else if (operation == decipher_char) {
		for (i = 2; i < argc; i++) {
			decipher(argv[i]);
		}
	} else {
		printf("ARGUMENT ERROR: The second argument must specify an operation.\nOPTIONS:\ncipher\tdecipher\n");
	}
}

void cipher(char arg[])
{
	int i = 0;

	for (i = 0; arg[i] != '\0'; i++) { 
		printf("%d \t", arg[i]);
	}

	printf("\n");
}

void decipher(char arg[])
{
	int i = 0;

	for (i = 0; arg[i] != '\0'; i++) {
		printf("%c", arg[i]);
	}

	printf("%c", 32);
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}