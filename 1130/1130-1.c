//malloc과 배열 포인터를 활용한 최대값과 첨자 반환 

#include <stdio.h>
#include <stdlib.h>

int maxnum(int *a, int n)
{
    int idx = 0;
    int ans = a[0];

    for(int i=0; i<n; i++)
    {
        if(a[i] > ans)
        {
            ans = a[i];
            idx = i;
        }
    }

    return idx;
}

int main()
{
    printf("배열의 크기를 입력: ");
    int n;
    scanf("%d",&n);

    int *arr = NULL;
    arr = malloc(sizeof(int)*n); //동적 할당

    printf("정수 입력: ");

    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    int k = maxnum(arr,n);

    printf("최대값과 첨자: %d %d",arr[k],k);

    return 0;
}
