#include <stdio.h>

int main()
{
    double x, y;
    if (scanf("%lf", &x)==0)
    {
        printf("n/a\n");
        return 0;
    }
    else if (scanf("%lf", &y)==0)
    {
        printf("n/a\n");
        return 0;
    }
    if (x*x + y*y < 25) printf("GOTCHA\n");
    else printf("MISS\n");
    return 0;
}
