#include <stdio.h>
/**
 * main - Prints a size of variables to the console
 * Return: 0 (Success)
 */
int main(void)
{
char lettre;
int number;
long int longnumber;
long long int longlongnumber;
float numberwithfasila;
printf("Size of a char: %lu byte(s)\n", sizeof(lettre));
printf("Size of an int: %lu byte(s)\n", sizeof(number));
printf("Size of a long int: %lu byte(s)\n", sizeof(longnumber));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongnumber));
printf("Size of a float: %lu byte(s)\n", sizeof(numberwithfasila));
return (0);
}
