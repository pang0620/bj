#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (B+C<60) {
        B+=C;
    }
    else {
        A += (B+C)/60;
        if (A>23) A-=24;

        B = (B+C) % 60;

    }

    printf("%d %d\n", A, B);

    return 0;
}