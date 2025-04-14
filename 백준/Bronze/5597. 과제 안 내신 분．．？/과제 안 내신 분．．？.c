#include <stdio.h>

void swap(int *pa, int *pb);
void selection_sort(int *pa, int size);
void input_array(int *pa, int size);

int main(void)
{
    int N=28;

    int A[N];
    int B[2] = {0,0};

    input_array(A, N);
    selection_sort(A, N);

    int T[31] = {0, };
    for (int i=0; i<sizeof(A)/sizeof(int); i++)
        T[A[i]] = 1;

    for (int i=1; i<sizeof(T)/sizeof(int); i++) {
        if (T[i]==0) 
        {
            if (B[0]==0) B[0]=i;
            else B[1]=i;
        }
    }

    if (B[0]<B[1])
        printf("%d\n%d\n", B[0], B[1]);
    else
        printf("%d\n%d\n", B[1], B[0]);

    return 0;
}

void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void selection_sort(int *pa, int size)
{
    int min;

    for (int j=0; j<size-1; j++)
    {
        min = j;

        //why i=j+1: min is already counting up there
        for (int i=j+1; i<size; i++)
        {
            if (pa[i]<pa[min])
            {
                min = i;
            }
        }
        swap(&pa[min], &pa[j]);
    }
}

void input_array(int *pa, int size)
{
    int temp;

    for (int i=0;  i<size; i++) {
        scanf("%d", &temp);
        pa[i] = temp;
    }
}