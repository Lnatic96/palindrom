#include <stdio.h>
int main()
{
    int n, rec = 0, remainder, originalInteger;

    printf("Uneti Broj: ");
    scanf("%d", &n);

    originalInteger = n;
    while( n!=0 )
    {
        remainder = n%10;
        rec = rec*10 + remainder;
        n /= 10;
    }

    if (originalInteger == rec)
        printf("%d je palindrom.", originalInteger);
    else
        printf("%d nije palindrom.", originalInteger);

    return 0;
}
