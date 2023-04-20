#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list arg;
		unsigned int param, sum = 0;
		/* initialize the argument list from the start */
		va_start(arg, n);
		/* iterate through all parameter values*/
		for (param = 0; param < n; param++)
		{
			/* get the next parameter value and add it to sum*/
			sum = sum +  va_arg(arg, int);
		}
		/*Clean up*/
		va_end(arg);
		return (sum);
	}
}
