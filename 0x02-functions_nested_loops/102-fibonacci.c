#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int counter;
    int countto = 50;
    long a = 1;
    long b = 2;

    for (counter = 1; counter < (countto / 2); counter++)
    {
        printf("%li", a);
        printf(counter != countto / 2 ? ", " : "");
        printf("%li", b);
        printf(counter != countto / 2 ? ", " : "");

        a += b;
        b += a;
    }

    if (countto % 2 == 1)
        printf("%li", a);

    printf("\n");

    return (0);
}
