#include <stdio.h>

int sum(int a, int b);
int dif(int a, int b);
int prod(int a, int b);
int quot(int a, int b);

int main() {
    double first_count, second_count;
    if (scanf("%lf", &first_count) == 0) {
        printf("n/a\n");
        return 0;
    } else if (scanf("%lf", &second_count) == 0) {
        printf("n/a\n");
        return 0;
    }
    if (first_count != (int)first_count || second_count != (int)second_count) {
        printf("n/a\n");
        return 0;
    }

    if (second_count == 0) {
        printf("%d %d %d n/a\n", sum(first_count, second_count), dif(first_count, second_count),
               prod(first_count, second_count));
    } else
        printf("%d %d %d %d\n", sum(first_count, second_count), dif(first_count, second_count),
               prod(first_count, second_count), quot(first_count, second_count));
    return 0;
}

int sum(int a, int b) { return a + b; }

int dif(int a, int b) { return a - b; }

int prod(int a, int b) { return a * b; }

int quot(int a, int b) { return a / b; }