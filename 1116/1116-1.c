#include <stdio.h>

void getSmall(int *numA, int *numS, int n)
{
    for(int i=0; i<n; i++)
    {
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            if(numA[i] > numA[j])
                cnt += 1;
        }
        numS[i] = cnt;
    }
}

int main()
{
    int c;
    scanf("%d",&c);
    int arr[c];
    int ans[c];
    for(int i = 0; i<c; i++)
        scanf("%d",&arr[i]);
    getSmall(arr,ans,c);

    for(int i=0; i<c; i++)
        printf("%d ",ans[i]);
    
    return 0;
}
