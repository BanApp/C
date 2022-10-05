////5의 배수 찾기

#include <stdio.h>

int main()
{
    for(int i=1; i<101; i++)
        {
            if (i%5 == 0)
            {
                printf("%d",i);
                printf("\n");
            }

            else
            {
                printf("%d ",i);
            }
        }
    return 0;
}
