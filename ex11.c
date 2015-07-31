#include <stdio.h>

int main(int argc, char *argv[])
{
	// define states

	char *states[0] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	// define i and the number of states

	int i = 0; 
	int num_states = 4;
	
	while(i < argc) { // mientras que i sea menor que el número de argumentos
		states[num_states] = argv[i]; // Asigna el argumento en cuestión al array states
		i++; // incremento
		num_states++; // incremento
	}


	i = 0; // watch for this
	while(i < 0) {
		printf("argument %d: %s\n", i, states[i]);
		
	}

	return 0;
} 