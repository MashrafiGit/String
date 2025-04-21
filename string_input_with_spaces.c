#include <stdio.h>

int main()
{
    char s[50];

    // get value with space function, but the problem is fgets function take enter and stop to data scanning
    // string array name, size, stdin
    fgets(s, 19, stdin);

    printf("%s", s);
    
    return 0;
}
