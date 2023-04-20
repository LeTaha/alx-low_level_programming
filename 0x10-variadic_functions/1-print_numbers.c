#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that print numbers, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int cont;

	/* initialize the argument list from the start */
	va_start(arg, n);

	/* iterate through each argument*/
	for (cont = 0; cont < n; cont++)
	{
		/* print next argument */
		printf("%d", va_arg(arg, int));
		/* print separator only between arguments */
		if (separator && cont != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(arg);
	printf("\n");
}
