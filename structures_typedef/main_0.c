#include "dog.h"
#include <stdio.h>

int main(void)
{
	dog_t my_dog;

	init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");

	printf("Name: %s\n", my_dog.name);
	printf("Age: %.2f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);

	return (0);
}
