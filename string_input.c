#include<stdio.h>
int main()
{
    char s[10];

    // shortcut for string array get value
    scanf("%s", &s);

    // shortcut for string array print value
    printf("%s\n", s);

    // after the mainvalue index bydefault is null
    printf("%c = %d", s[5], s[5]);

    return 0;
}