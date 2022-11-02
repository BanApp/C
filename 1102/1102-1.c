//포인터를 이용해서 역순으로 문자열을 새롭게 만들기

#include <stdio.h>
#include <string.h>

void linecopy(char *a, char *b)
{
    int cnt = 0;
    for(int i = strlen(a)-1; i>-1; i--) {
        b[cnt] = a[i];
        cnt++;
    }
}

int main() {
    char line[80] = {};
    char revline[80] = {};
    
    gets(line);
    char *p1 = line;
    char *p2 = revline;
    
    linecopy(p1,p2); //함수로 포인터 배열을 넘겨줄때는 주소가 아닌 값으로 넘겨줌

    printf("%s",p2);
    return 0;
}
