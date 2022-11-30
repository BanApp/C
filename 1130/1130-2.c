//argc, argv를 이용한 c언의 main함수 매개변수 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int sum = 0;
    int avg = 0;

    for(int i =1; i<argc; i++)
    {
        sum = sum + atoi(argv[i]);
    }

    printf("%d\n",sum);
    avg = sum/(argc-1);
    printf("%d\n",avg);

    return 0;
}
