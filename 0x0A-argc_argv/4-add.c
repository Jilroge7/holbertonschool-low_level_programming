#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
* main - function, entry point
* @argc: # of args passed
* @argv: strings passed indiv as arg to prog
*
* Description: program that adds positive numbers
* Return: 0, 1 if number contains symbol !digits
*/
int main(int argc, char *argv[])
{
	int i, j, val = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1 && argc >= 3)
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; j < argc; j++)
			{
				if (*argv[i] > '0' && *argv[i] > '9')
				{
					printf("Errornew\n");
					return (1);
				}
				else
				{
					val += atoi(argv[i]);
				}
			}
		}
			printf("%d\n", val);
	}
	return (0);
}
