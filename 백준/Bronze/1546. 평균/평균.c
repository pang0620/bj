#include <stdio.h>

int find_max(double *pa, int size);
void input_array(double *pa, int size);

int main(void)
{
    int N, max;
    double sum = 0;
    scanf("%d", &N);

    double arr[N];
    input_array(arr, N);

    max = arr[find_max(arr, N)];

    for (int i=0; i<N; i++)
    {
        arr[i] = arr[i] / max * 100;
        sum += arr[i];
    }

    printf("%lf\n", sum/N);

    return 0;
}

void input_array(double *pa, int size)
{
    for (int i=0; i<size; i++) scanf("%lf", &pa[i]);
}

int find_max(double *pa, int size)
{
    int max_index = 0;

    for (int i=0; i<size; i++)
    {
        if (pa[max_index] < pa[i])
        {
            max_index = i;
        }
    }

    return max_index;
}