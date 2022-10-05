///1~100 까지의 소수 개수 출력 및 입력 받은 수 소수 판별

#include<stdio.h>

int IsPrimeNumber(int x)
{
    int ck = 0;
    for(int i = 2; i<x; i++)
    {
        if(x%i==0) {
            ck = 1;
            break;
        }
    }

    int cnt = 0;
    int p = 0;

    for(int i =2; i<=100; i++)
    {
        p = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0)
            {
                p = 1;
            }

        }
        if (p == 0)
        {
            printf("%d\n",i);
            cnt = cnt + 1;
        }
    }
    printf("소수는 총 %d개",cnt);

    if(ck == 1)
        return 0;
    else
        return 1;

}

int main()
{
    int a=0;
    scanf("%d",&a);
    int ans = 0;
    ans = IsPrimeNumber(a);

    if(ans == 1)
        printf("\n%d는 소수가 맞습니다",a);
    else
        printf("\n%d는 소수 아닙니다.",a);

    return 0;
}
