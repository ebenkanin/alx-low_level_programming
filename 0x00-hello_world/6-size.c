#include <stdio.h>
/**
 * main - program prints sizes of various types on computer
 * Return 0 (Correct)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeofof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeofof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeofof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeofof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeofof(f));
return (0);
}
