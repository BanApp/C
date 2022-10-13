#include <stdio.h>

//대문자 -> 소문자, 소문자 -> 대문자

int main()
{
    char arr[100];
    gets(arr);

    for(int i=0; arr[i]; i++)
    {
        if((int)arr[i] >= 97 && (int)arr[i] <= 122)
            arr[i] = (char)((int)arr[i] - 32);

        else if((int)arr[i] >= 65 && (int)arr[i] <= 90)
            arr[i] = (char)((int)arr[i] + 32);

    }
    printf("%s",arr);

    return 0;

}
