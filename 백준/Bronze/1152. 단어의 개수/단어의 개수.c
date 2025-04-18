#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[1000000 + 1 + 1];
    char *ps = S;
    int spaces = 0;

    fgets(S, 1000000 + 1 + 1, stdin);
    if ((S[1]=='\n') && (S[0]==' '))
    {
        printf("%d\n", 0);
        return 0;
    }

    //remove first space
    if (S[0] == ' ') S[0]='_';

    //remove last space
    int last = strlen(S)-1;
    if (S[last-1] == ' ') S[last-1] = '\0';

    ps = S;
    while(*ps)
    {
        if (*ps==' ') spaces++;
        ps++;
    }

    printf("%d\n", spaces+1);

    return 0;
}