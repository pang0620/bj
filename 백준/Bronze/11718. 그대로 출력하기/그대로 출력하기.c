#include <stdio.h>

int main(void)
{
    char S[10001];
    char *ps = S;

    while (1)
    {
        *ps = getchar();
        if ((*ps == '\0') || (*ps == EOF)) break;
        else putchar(*ps);
        ps++;
    }


    return 0;
}