#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	// ex15
	char **argument = argv;

	if(argc <= 2) {
		printf("You only have one argument, you suck.\n");
	} else if(argc > 2 && argc < 5) {
		printf("Here're your arguments:\n");

		for (i = 0; i < argc; i++) {
			printf("%s\n", argument[i]);
		}
	} else {
		printf("You have to many arguments, you suck.\n");
	}

	return 0;
}