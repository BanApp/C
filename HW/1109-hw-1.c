#include <math.h>
#include <stdio.h>
#define MAXLEN 80

int counter(char *a)
{
    int cnt = 0;
    for(int i=0; i<MAXLEN; i++)
    {
        if(a[i] == '\0')
            break;
        else
            cnt += 1;
    }
    return cnt;
}

int main()
{
    char arr[MAXLEN] = {};
    gets(arr);

    char *p = arr;
    int ans;
    ans = counter(p);

    printf("입력받은 문자열의 길이: %d",ans);

    return 0;
}
