#include <stdio.h>

int max(int a, int b);

int main() {
    int fc, sc;
    char ci;
    if (scanf("%d%d%c", &fc, &sc, &ci) == 3 && ci == '\n')
        printf("%d\n", max(fc, sc));
    else
        printf("n/a\n");
}

int max(int a, int b) {
    int max_c = a;
    if (b > a) {
        max_c = b;
    }
    return max_c;
}