#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *check_num - check string there are digit
 *@str: array str
 *
 *Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declearing variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
	if (!isdigit(str[count])) /*check if str there are digit*/
	{
	return (0);
	}
	count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])

{
	/*declear variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
	if (check_num(argv[count]))

	{
	str_to_int = atoi(argv[count]); /*atoiconvert stringto int*/
	sum += str_to_int;
	}

	/*conditon if one of the number containssymbols that are not digits*/
	else
	{
	printf("Error\n");
	return (1);
	}
	count++;
	}

	printf("%d\n", sum);/*print sum*/
	return (0);
}
