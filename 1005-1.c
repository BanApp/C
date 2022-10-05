///윤년 판별기

#include<stdio.h>

int IsLeapYear(int y)
{
    if ((y%4==0 && y%100!=0)||y%400==0)
        return 1;
    else
        return 0;
}

int main()
{
    while (1)
    {
        int y = 0;
        printf("연도를 입력하세요: ");
        scanf("%d",&y);

        if(y>=0)
            if (IsLeapYear(y) == 1)
                printf("윤년입니다\n");
            else
                printf("윤년이 아닙니다\n");

        else
            break;
    }
    return 0;
}
