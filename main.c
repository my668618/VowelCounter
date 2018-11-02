#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char x;
    printf("Enter a string of text: ");
    while ((x = getchar()))
    {
        if (x == 'A' || x == 'a')
        a = a + 1;
        if (x == 'E' || x == 'e')
        e = e + 1;
        if (x == 'I' || x == 'i')
        i = i + 1;
        if (x == 'O' || x == 'o')
        o = o + 1;
        if (x == 'U' || x == 'u')
        u = u + 1;
    }
    printf("Aa = %d", a);
    printf("Ee = %d", e);
    printf("Ii = %d", i);
    printf("Oo = %d", o);
    printf("Uu = %d", u);
    return 0;
}
