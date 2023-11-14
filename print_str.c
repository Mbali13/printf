#include "main.h"

/**
 * _strlen - the length of the string return
 * @str: string pointer
 * Return: i
 */

int _strlen(char *str)
{
	int a;

	for (a = 0 ; str[a] != 0 ; a++)
		;
	return (a);
}

/**
 * _strlenc - strlen function but aplied for constant char pointer str
 * @str: char pointer
 * Return: i
 */
int _strlenc(const char *str)
{
	int a;

	for (a = 0 ; str[a] != 0 ; a++)
		;
	return (a);
}
