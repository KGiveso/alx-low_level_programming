#include "main.h"

/**
 *makemewin - Overwrites the srand function in the libc shared object
 * @roll: random number of times generate to win
 * exit success
 */
void makemewin(unsigned int roll)
{
	const char *num_roll = "9 8 10 24 75 - 9\n";
	const char *ticket = "Congratulations, you win the Jackpot!\n";

	(void)roll;
	write(STDOUT_FILENO, (void *)num_roll, 17);
	write(STDOUT_FILENO, (void *)ticket, 38);
	exit(EXIT_SUCCESS);
}
