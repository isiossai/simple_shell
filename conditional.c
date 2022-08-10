#include "shell.h"
/**
  * printdollar - prints the $ symbol
  */
void printdollar(void)
{
	if (isatty(STDIN_FILENO))
		printf("~$ ");
}
