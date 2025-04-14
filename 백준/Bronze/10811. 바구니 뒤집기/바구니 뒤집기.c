#include <stdio.h>

void swap(int *pa, int *pb);
void print_array(int *pa, int size);
void selection_sort(int *pa, int size);
void reverse(int *pa, int size, int start, int end);

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    //init arr
    int arr[N];
    for (int i=0; i<N; i++) {
        arr[i] = i+1;
    }

    //for M times
    int i, j;
    for (int n=0; n<M; n++)
    {
        scanf("%d %d", &i, &j);
        reverse(arr, N, i, j);

    }
    print_array(arr, N);

    return 0;
}

void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void print_array(int *pa, int size)
{
    for (int i=0; i<size; i++) printf("%d ", pa[i]); printf("\n");
}

void reverse(int *pa, int size, int start, int end)
{
    for (int i=0; i<=(end-start)/2; i++)
    {
        swap(&pa[start-1+i], &pa[end-1-i]);
    }
}