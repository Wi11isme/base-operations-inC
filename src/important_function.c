#include <stdio.h>
#include <math.h>

double func(double num);

int main()
{
    double x;
    char ci;
    if (scanf("%lf%c", &x, &ci) == 2 && ci == '\n')
        printf("%.1f\n", func(x));
    else
        printf("n/a\n");

}

double func(double x)
{
    return (7e-3 * pow(x, 4) + ((22.8 * pow(x, 1/3) - 1e3) * x + 3) / (x * x / 2) - x * pow(10 + x, 2/x) - 1.01);
}