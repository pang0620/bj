#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x>0 && y>0) { printf("%d\n", 1);}
    else if (x<0 && y>0) { printf("%d\n", 2);}
    else if (x<0 && y<0) { printf("%d\n", 3);}
    else if (x>0 && y<0) { printf("%d\n", 4);}

    return 0;
}