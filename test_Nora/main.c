#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	/* testing %c" */
	len = _printf("this is a char: %c \n", 'a');
	len2 = printf("this is a char: %c \n", 'a');
	printf("Length:[%i, %i]\n", len, len2);
	printf("_____________________________________\n");

	/* testing %s" */
	len = _printf("print: %s \n", "hello this is a string");
	len2 = printf("print: %s \n", "hello this is a string");
	printf("Length:[%i, %i]\n", len, len2);
	/* testing %s" */
	len = _printf("print: %s \n", NULL);
	len2 = printf("print: %s \n", NULL);
	printf("Length:[%i, %i]\n", len, len2);
	printf("_____________________________________\n")
	return (0);
}
