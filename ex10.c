#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 5;

	// see if you can assign an element of the states array to argv
	argv[5] = states[2];

	// go through each string in argv
	// why am I skipping argv[0]?
	for(i = 1; i < argc; i++) {
		printf("arg: %d, %s\n", i, argv[i]);
	}

	// let's make our own array of strings

	for (i = 0; i < num_states; i++) {
		printf("states: %d, %s\n", i, states[i]);
	}

	return 0;
}