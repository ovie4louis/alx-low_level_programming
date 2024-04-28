#include "main.h"

/**
 * _strcat - function that concatenates
 *     two strings
 *
 *@dest : input value
 *@src : input value
 *(dest): value
 *
 * Return : pointer to resulting @dest
 */
char *_strcat(char *dest, char *src)

{
	int i;
	int j;

	i =  0;
	while (dest[i])
	i++;
	for (j = 0; src[j]; j++)
	dest[i++] = src[j];

	return(dest);
}
