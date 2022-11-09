#include <stdio.h>
#define MAXLEN 80

//문자열(포인터로 받음)에서 문자의 개수를 카운트 하는 함수
int counter(char *a)
{
    int cnt = 0; //문자의 개수가 담길 함수
    for(int i=0; i<MAXLEN; i++)
    {
        if(a[i] == '\0') //NULL 만나면 문자의 끝, 따라서 반복문 탈출
            break;
        else
            cnt += 1; //그 외에는 문자의 개수 1개씩 증가
    }
    return cnt; //문자의 개수 반환
}

int main()
{
    char arr[MAXLEN] = {};
    gets(arr);

    char *p = arr; //문자열 포인터
    int ans;
    ans = counter(p);

    printf("입력받은 문자열의 길이: %d",ans);

    return 0;
}
