//구조체 배열을 이용한 좌표의 최단 거리 찾기

#include <stdio.h>
#include <string.h>
#include "math.h"

struct point{
    int x,y;
};

int main() {
    struct point arr[5];
    int ans_x,ans_y;
    float ans;
    for(int i =0; i<5; i++)
    {

        scanf("%d",&arr[i].x);
        scanf("%d",&arr[i].y);
        if(i==0)
        {

            ans = sqrt(pow(arr[i].x,2) + pow(arr[i].y,2));
            ans_x = arr[i].x;
            ans_y = arr[i].y;
        }
        else
        {
            if(sqrt(pow(arr[i].x,2) + pow(arr[i].y,2)) < ans)
            {
                ans = sqrt(pow(arr[i].x,2) + pow(arr[i].y,2));
                ans_x = arr[i].x;
                ans_y = arr[i].y;
            }
        }
    }
    printf("%d %d 거리: %f",ans_x,ans_y,ans);

    return 0;
}
