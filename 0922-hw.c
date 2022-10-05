#include <stdio.h>

int main()
{
    int ans = 67; //초기값 설정
    int cnt = 0; //시행 횟수 저장 변수
    int x = 0; //사용자의 입력 변수

    printf("하나의 수를 입력하시오: ");

    while (1) //정답 제출 조건 만족할때 까지 무한 반복
    {
        scanf("%d",&x); //사용자의 입력
        cnt +=1; //사용자의 입력마다 시행횟수가 1씩 증가

        if(x>ans){
            printf("더 작은 수를 입력하시오: ");
        }

        else if(x<ans){
            printf("더 큰 수를 입력하시오: ");
        }

        else if(x==ans){
            printf("맞습니다. 시행횟수는 %d번 입니다.",cnt);
            break; //정답 제출 조건 만족시 반복문 탈출
        }

    }
    return 0; //프로그램(main 함수) 종료
}
