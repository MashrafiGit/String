#include <stdio.h>
int main()
{
    // we don't need to declare '\0' = null, just need to empty one step at the end of the value
    // char s[9] = {'M', 'a', 's', 'h', 'r', 'a', 'f', 'i'};

    // shortcut easy way with space
    char s[19] = "Ali Hasan Mashrafi";
    printf("%s", s);

    return 0;
}