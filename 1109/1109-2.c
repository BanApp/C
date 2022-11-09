//typedf의 이용고 구조체 배열을 활용한 주어진 3개의 좌표값들중 최대 직선 거리 구하기

//ex) (0,0) (2,3)
//ex) (-1,1) (1,-1)
//ex) (-3,-3) (1,1)

#include <math.h>
#include <stdio.h>

struct point{
    int x,y;
};

typedef struct point POINT;

struct line{
    POINT start;
    POINT end;
};

int main() {
    float r_ans = 0;
    struct line aline[3];

    for(int i=0; i<3; i++)
    {
        double ans;
        scanf("%d",&aline[i].start.x);
        scanf("%d",&aline[i].start.y);
        scanf("%d",&aline[i].end.x);
        scanf("%d",&aline[i].end.y);

        ans = sqrt(pow(aline[i].start.x-aline[i].end.x,2) + pow(aline[i].start.y-aline[i].end.y,2));

        if(ans > r_ans)
            r_ans = ans;
    }

    printf("가징 긴 선의 길이: %f",r_ans);

    return 0;
}
