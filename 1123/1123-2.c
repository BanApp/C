//qsort 오름차순 함수 포인터

//5개의 문자열을 읽어드려서 가장 긴 문자열을 출력(문자열 함수 안쓰고)
#include "stdio.h"
#include "stdlib.h"

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    qsort(arr, n, sizeof(int), compare);

    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);

    return 0;
}
