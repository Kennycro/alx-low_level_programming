#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", *argv[0]);
	return (0);
}
