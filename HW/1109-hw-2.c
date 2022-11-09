#include <math.h>
#include <stdio.h>

//좌표 구조체
struct point{
    int x,y;
};

int main() 
{
    struct point p[5]; //좌표값을 담을 구조체 배열 선언
    int ans_x1,ans_y1,ans_x2,ans_y2;
    double ans;

    for(int i=0; i<5; i++)
    {
        scanf("%d",&p[i].x); //구조체 배열에 x좌표 입력
        scanf("%d",&p[i].y); //구조체 배열에 y좌표 입력
    }

    //2중 반복문으로 비교
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(i==0 && j==1)
            {
                //두 좌표 간의 거리가 담길 변수 선언 및 계산 첫 시행 이므로 정답 변수에 할당
                ans = sqrt(pow(p[i].x-p[j].x,2) + pow(p[i].y-p[j].y,2));
                ans_x1 = p[i].x;
                ans_y1 = p[i].y;
                ans_x2 = p[j].x;
                ans_y2 = p[j].x;
            }
            else
            {
                double tmp; //두 좌표 간의 거리가 담길 변수 선언 및 계산
                tmp = sqrt(pow(p[i].x-p[j].x,2) + pow(p[i].y-p[j].y,2));

                if(tmp<ans) //기존 값보다 작다면 최단 거리 및 좌표값 갱신
                {
                    ans = tmp;
                    ans_x1 = p[i].x;
                    ans_y1 = p[i].y;
                    ans_x2 = p[j].x;
                    ans_y2 = p[j].y;
                }
            }
        }
    }
    
    printf("첫번째 좌표) x: %d, y: %d\n",ans_x1,ans_y1);
    printf("두번째 좌표) x: %d, y: %d\n",ans_x2,ans_y2);
    printf("최단 거리) %f\n",ans);

    return 0;
}
