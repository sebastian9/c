#include <stdio.h>

// Json attempt in C

void print_object(char *object[]);

int main(int argc, char *argv[])
{
	char *sebastian[6] = {
		"Sebastián", "López",
		"17", "student", "Mexico"
	};

	char *oscar[6] = {
		"Oscar", "Valenzuela",
		"21", "Dronista", "México"
	};

	char *ennia[6] = {
		"Ennia", "Sánchez",
		"45", "Maestra", "México"
	};

	char *mario[6] = {
		"Mario", "Sánchez",
		"40", "Restaurantero", "Orlando" 
	};

	print_object(sebastian);

	print_object(oscar);

	print_object(ennia);

	print_object(mario);

	return 0;
}

void print_object(char *object[])
{
	char **name = object;
	char **surname = (name + 1);
	char **age = (name + 2);
	char **profession = (name + 3);
	char **country = (name + 4);

	printf("Name: %s\n", *name);

	printf("Surname: %s\n", *surname);

	printf("Age: %s\n", *age);

	printf("Profession: %s\n", *profession);

	printf("Country: %s\n", *country);

	printf("---\n");
}