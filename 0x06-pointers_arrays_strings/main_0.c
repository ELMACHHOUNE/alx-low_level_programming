#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *n1, *n2, r[100], *res;

    n1 = "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    n2 = "1";
    res = infinite_add(n1, n2, r, 100);
    if (res == 0)
        printf("Error\n");
    else
        printf("%s + %s = %s\n", n1, n2, res);

    n1 = "99999999999999999999999999999999999999999999999999";
    n2 = "1";
    res = infinite_add(n1, n2, r, 100);
    if (res == 0)
        printf("Error\n");
    else
        printf("%s + %s = %s\n", n1, n2, res);

    n1 = "1234567890";
    n2 = "1";
    res = infinite_add(n1, n2, r, 100);
    if (res == 0)
        printf("Error\n");
    else
        printf("%s + %s = %s\n", n1, n2, res);

    n1 = "999999999";
    n2 = "1";
    res = infinite_add(n1, n2, r, 100);
    if (res == 0)
        printf("Error\n");
    else
        printf("%s + %s = %s\n", n1, n2, res);

    n1 = "999999999999999999999999999999999999999999999999";
    n2 = "1";
    res = infinite_add(n1, n2, r, 100);
    if (res == 0)
        printf("Error\n");
    else
        printf("%s + %s = %s\n", n1, n2, res);

    return (0);
}
