#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *CNC;
	int len = strlen(argv[1]), i, util;

	CNC = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	util = (len ^ 59) & 63;
	password[0] = CNC[util];

	util = 0;
	for (i = 0; i < len; i++)
		util += argv[1][i];
	password[1] = CNC[(util ^ 79) & 63];

	util = 1;
	for (i = 0; i < len; i++)
		util *= argv[1][i];
	password[2] = CNC[(util ^ 85) & 63];

	util = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > util)
			util = argv[1][i];
	}
	srand(util ^ 14);
	password[3] = CNC[rand() & 63];

	util = 0;
	for (i = 0; i < len; i++)
		util += (argv[1][i] * argv[1][i]);
	password[4] = CNC[(util ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		util = rand();
	password[5] = CNC[(util ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
