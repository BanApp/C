#include <stdio.h>
#include <stdlib.h>

//중복 제거 함수
int set(int *a, int *b, int n)
{
    int x = 0; //정답 정수형 배열의 인덱스
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j=0; j<n; j++)
            if(a[i] == a[j])
            {
                cnt += 1;
            }

        if(cnt == 1) //배열 안에 해당 숫자가 한번만 나올때
        {
            b[x] = a[i];
            x++; //정답 배열 인덱스 증가
        }
    }
    return x;
}

int main()
{
    //3번 테스트를 위해 반복문을 사용해서 3번 실행
    for(int k=0; k<3; k++)
    {
        printf("배열의 크기를 입력: ");
        int n;
        scanf("%d",&n);

        //입력받을 숫자를 담을 정수형 포인터 배열
        int *arr = NULL;
        arr = malloc(sizeof(int)*n); //동적 할당

        printf("정수 입력: ");
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);

        //정답을 담을 정수형 포인터 배열
        int *ans = malloc(sizeof(int)*n); //동적 할당

        int m; // 중복된 값을 제외한 정수가 몇개 있는지 반환받을 정수 변수
        m = set(arr,ans,n); // 중복 제거 함수 호출

        printf("중복 되지 않은 정수들 : ");
        for(int i=0; i<m; i++)
            printf("%d ",ans[i]);
        printf("\n");
        printf("\n");

        //동적 메모리 해제
        free(arr);
        arr= NULL;

        free(ans);
        ans = NULL;
    }
    return 0;
}
