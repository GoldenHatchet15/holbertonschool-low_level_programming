#include "main.h"

/**
 * main - Entry point, prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *message = "_putchar\n";
	int i = 0;

	while (message[i])
	{
		_putchar(message[i]);
		i++;
	}

	return (0);
}
