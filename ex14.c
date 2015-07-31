#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
void print_letters(int length, char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;
	// Exercise 15 pointer modification
		// Use char type because it's a string
		// Use two * as pointers because it's a 
		// 2d array of characters
	char **cur_argument = argv;

	for (i = 1; i < argc; i++) {
		int length = strlen(cur_argument[i]);
		print_letters(length, cur_argument[i]);
	}
}

void print_letters(int length,char arg[])
{
	int i = 0;

	for (i = 0; i < length; i++) {
		char ch = arg[i];

		if(isalnum(ch) || isblank(ch)) {
			printf("%d", ch);
		}
	}

	printf("\n");
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}