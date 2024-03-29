#include <stdio.h>

int main(int argc, char *argv[])
{
	// create two arrays we care about
	int ages[] = {23,43,12,89,2};
	char *names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa"
	};

	// Safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	// Setup the pointer to the start of the arrays
	int *cur_age = ages;
	char **cur_name = names;

	// first way, using indexing
	for(i = 0; i < count; i++) {
		printf("%s has %d years alive.\n",
			*(cur_name + i), *(cur_age + i));
	}

	printf("---\n");

	// second way, using pointers
	for(i = 0; i < count; i++) {
		printf("%s has %d years old.\n",
			*(cur_name+i), *(cur_age+i));
	}

	printf("---\n");

	// third way, pointers are just arrays
	for(i = 0; i < count; i++) {
		printf("%s has %d years old again.\n",
			cur_name[i], cur_age[i]);
	}

	printf("---\n");

	// fourth way in an (indeed) stupid complex way

	for(cur_name = names, cur_age = ages;
		(cur_age - ages) < count;
		cur_name++, cur_age++)
	{
		printf("%s has %d years so far.\n", *cur_name, *cur_age);
	}

	return 0;
}