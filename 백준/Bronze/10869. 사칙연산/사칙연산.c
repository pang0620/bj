#include <stdio.h>

int main() {
    unsigned int A,B;
    
    scanf("%d %d", &A, &B);
    printf("%d\n%d\n%d\n%d\n%d\n", A+B, A-B, A*B, A/B, A%B);
    
    return 0;
}