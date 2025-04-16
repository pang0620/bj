#include <stdio.h>

int find_max(int *pa, int size);

int main(void)
{
    int arr[9][9];
    int max1[9];
    int max;

    for (int i=0; i<9; i++)
        for (int j=0; j<9; j++)
            scanf("%d", &arr[i][j]);
    
    for (int i=0; i<9; i++)
        max1[i] = arr[i][find_max(arr[i], 9)];

    max = find_max(max1, 9);
    printf("%d\n", max1[max]);
    printf("%d %d\n", max+1, find_max(arr[max], 9)+1);

	return 0;
}

int find_max(int *pa, int size)
{
    int max_index=0;
    for (int i=0; i<size; i++) max_index = pa[i]>pa[max_index] ? i : max_index;

    return max_index;
}