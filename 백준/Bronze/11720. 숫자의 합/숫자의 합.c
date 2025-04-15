#include <stdio.h>

int atoi(char ch);

int main(void)
{
    int N, sum=0;
    char arr[101];
    char *p = arr;

    scanf("%d", &N);
    scanf("%s", arr);
    // or getchar()? interesting but not now

    while (*p) sum += atoi(*p++);

    printf("%d\n", sum);

    return 0;
}

int atoi(char ch)
{
    // this works like variable!
    return (int)ch-48;
}