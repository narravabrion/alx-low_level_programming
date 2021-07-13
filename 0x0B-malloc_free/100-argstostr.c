#include "holberton.h"
#include "stdlib.h"

/**
 * _strlen - calculate the length of string
 * @s: string to be calculated
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * argstostr - prints argument passed new line
 * @ac: argument count
 * @av: argument vector
 * Return: Null if ac = 0 or av = null or pointer fail. Return value of a
 */

char *argstostr(int ac, char **av)
{

	char *a;
	int i;
	int c = 0;
	int n = 0;
	int l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		l += _strlen(av[i]);
	}

	a = malloc(sizeof(char) * l + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (c = 0; av[i][c] != '\0'; c++, n++)
		{
			a[n] = av[i][c];
		}
		a[n] = '\n';
		n++;
	}
	a[n] = '\0';
	return (a);
}
