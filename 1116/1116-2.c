//구조체 배열을 포인터로 넘겨서 입력받은 직사각형들의 넓이의 합을 출력

#include <stdio.h>
#include "math.h"
#include "stdlib.h"

typedef struct rect{
    int x1,y1;
    int x2,y2;
} RECT;

int SunArea(RECT* rectarr,int n)
{
    double ans = 0;
    for(int i=0; i<n; i++)
    {
        int x = abs((rectarr[i].x1 - rectarr[i].x2));
        int y = abs((rectarr[i].y1 - rectarr[i].y2));
        ans = ans + (x*y);
    }
    printf("%f",ans);
}

int main()
{
    struct rect REC[3];

    for(int i=0; i<3; i++)
    {
        scanf("%d", &REC[i].x1);
        scanf("%d", &REC[i].y1);
        scanf("%d", &REC[i].x2);
        scanf("%d", &REC[i].y2);
    }

    SunArea(REC,3);

    return 0;
}
