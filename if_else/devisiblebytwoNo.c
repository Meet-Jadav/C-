#include <stdio.h>
int main()
{
    int x;
    printf("Enter the degit:");
    scanf("%d", &x);
    if ((x % 5 == 0 || x % 3 == 0 ) && x%15!=0)
    {
        printf("Given degit is either divisible by 5 or 3 but not divisibel by 15.");
    }
    else
    {
         printf (" Any of given condition do not satisfy.");
    }

    return 0;
}
// Acording to BODMAS /hierykey priority order is (&& > ||).
// so hear we have to add a breket-> (Bodmas) .