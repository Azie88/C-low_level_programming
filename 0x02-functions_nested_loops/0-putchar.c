#include <main.h>
/**
 * main - main block
 * Return: 0
 */
const char *text="_putchar";
int main()
{
    int i;
    for (i=0;text[i]!=0;i++) _putchar(text[i]);
    _putchar('\n');
    return (0);
}