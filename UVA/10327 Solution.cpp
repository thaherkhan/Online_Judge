#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n)
{
    int i, j, count=0;
    for(i=0; i<n-1; i++)
        for(j=0; j<n-1-i; j++)
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1] );
                count++;
            }
    printf("Minimum exchange operations : %d\n", count);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrayTraverse(int a[], int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d\t", a[i]);
    printf("\n");
}

int main()
{
    int n, i;
    while(scanf("%d", &n)!=EOF)
    {
        int a[n+5];
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        bubbleSort(a, n);
    }
}
