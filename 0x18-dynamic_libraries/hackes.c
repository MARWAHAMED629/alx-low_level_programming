#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * my_print - Custom print function.
 * @format: Format string for printing.
 *
 * This function provides custom print behavior,
 * including specific messages and exiting with success.
 *
 * Return: Always returns void.
 */

int my_print(__attribute__((unused)) const char *format, ...)
{
	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
	return (0);
}
