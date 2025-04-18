#include <stdio.h>

int main(void)
{
    int T;
    int R;
    char S[21];
    char *ps = S;
    
    /*
    input: 
    2
    3 ABC
    5 /HTP

    output:
    AABBBCCC
    /////HHHHHTTTTTPPPPP
    */
   scanf("%d", &T);

    //for each test cases
    for (int i=0; i<T; i++)
    {
        //get repeat & string
        scanf("%d %s", &R, S);
        
        //while symbol in string is not EOF or \0
        while (*ps != '\0')
        {
            for (int i=0; i<R; i++) printf("%c", *ps);
            ps++;
        }
        printf("\n");
        ps = S;
    }

    return 0;
}