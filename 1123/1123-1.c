//5개의 문자열을 읽어드려서 가장 긴 문자열을 출력(문자열 함수 안쓰고)
#include "stdio.h"

int main()
{
    char *arr[5];
    char str[5][80];

    for(int i=0; i<5; i++)
    {
        gets(str[i]);
        arr[i] = str[i];
    }

    char *ans; //정답 포인터
    ans = arr[0];
    int cnt_ans = 0; //지금까지 가장 긴 문자열의 길이

    for(int i=0; i<5; i++)
    {
        int cnt = 0;
        //문자열 길이 판별
        for(int j=0; j<80; j++)
        {
            if(arr[i][j] == '\0')
                break;
            else
                cnt += 1;
        }

        //가장 길이가 긴 문자열 및 길이값 갱신
        if(cnt>cnt_ans)
        {
            cnt_ans = cnt;
            ans = arr[i];
        }
    }

    printf("%s",ans);

    return 0;
}
