#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char game;

	for (game = 'a'; game <= 'z'; game++)
		putchar(game);

	putchar('\n');

	return (0);
}
