#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - function
* @d: pointer to dog
*
* Description: function to free dogs
* Return: 0 Success
*/
void free_dog(dog_t *d)
{
	free(d);
}
