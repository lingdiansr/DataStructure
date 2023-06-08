#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    scanf("%s", str);
    printf("%s\n", str);
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%s\n", str);
        printf("%c", str[strlen(str) - i - 1]);
    }
    return 0;
}