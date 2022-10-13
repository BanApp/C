#include <stdio.h>

int main() {
    //n이 음수가 아닐동안 계속 진행
    while (1)
    {
        int n = 0;
        printf("정렬할 정수의 수를 입력(종료시 -1을 입력): ");
        scanf("%d",&n);

        // n이 0보다 크다면 배열 입력받은 후 정렬
        if(n > 0){
            printf("%d개의 수를 차례로 입력하시오: ",n);
            int arr[n];
            for(int i=0; i<n; i++){
                int x = 0;
                scanf("%d",&x);
                arr[i] = x;
            }

            //버블 정렬
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < (n - 1) - i; j++) {
                    if (arr[j] > arr[j + 1]) {
                        int tmp = 0;
                        tmp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = tmp;
                    }
                }
            }
            //결과출력
            printf("정렬의 결과: ");
            for(int i=0; i<n; i++)
                printf("%d ",arr[i]);
            printf("\n");
            printf("\n");
        }

        // n이 0보다 작거나 같다면 반복문 탈출
        else
            break;

    }
    printf("---프로그램 종료");
    return 0;
}
