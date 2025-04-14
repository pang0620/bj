#include <stdio.h>
#define ARR_SIZE 10

void swap(int *pa, int *pb);
void selection_sort(int *pa, int size);

void print_array(int *pa, int size)
{
    for (int i=0; i<size; i++) printf("%d ", pa[i]); printf("\n");
}

int main(void)
{
    int arr1[ARR_SIZE];
    int arr2[ARR_SIZE]= {-1};
    
    int count=0;

    for (int i=0; i<ARR_SIZE; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i=0; i<ARR_SIZE; i++)
    {
        arr2[i] = arr1[i]%42;
    }
    
    selection_sort(arr2, ARR_SIZE);

    //fix here
    for (int i=0; i<ARR_SIZE; i++)
    {
        if (arr2[i]==arr2[i+1]) {
            for (int j=0; j<ARR_SIZE-i; j++)
            {
                if (arr2[i]!=arr2[i+j]) continue;
                arr2[i+j] = -1;
            }
        }
    }

    for (int i=0; i<ARR_SIZE; i++)
    {
        if (arr2[i]!=-1)
        count++;
    }

    printf("%d\n", count);

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
    int max, max_index;

    for (int j=0; j<size-1; j++)
    {
        max = pa[0];
        max_index = 0;
        for (int i=0; i<size-j; i++)
        {
            if (pa[i]>max)
            {
                max = pa[i];
                max_index = i;
            }
        }
        swap(&pa[max_index], &pa[size-(j+1)]);
    }
}
