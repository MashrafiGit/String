#include<stdio.h>
int main()
{
    // we should take extra one step like, we need to string is 4 character we must need extra one so the length is 5 coz end of the string point is null  
    int n;
    scanf("%d", &n);

    char a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}