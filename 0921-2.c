///소수 판별기

#include <stdio.h>

int main()
{
    int x = 1;
    scanf("%d",&x);
    int cnt = 0;
    for(int i=1; i<=x; i++){
        if(x%i == 0){
            cnt += 1;
            printf("%d ", i);
        }
    }
    if(cnt==2){
        printf("\n");
        printf("소수");
        }

    return 0;
}
