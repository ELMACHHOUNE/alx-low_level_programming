#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
    int last_digit;

    if (n < 0) {
        n = -n;
    }

    last_digit = n % 10;

    _putchar('0' + last_digit);

    return last_digit;
}
